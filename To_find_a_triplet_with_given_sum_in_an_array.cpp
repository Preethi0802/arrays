#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,n;
        cout<<"enter the size of the array"<<endl;
        cin>>n;
        cout<<"enter the sum"<<endl;
        cin>>x;
        int arr[n];
        cout<<"enter the array elements"<<endl;
        for(int i=0;i<n;i++)
        cin>>arr[i];
        
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for( int k=0;k<n;k++){
                    if(arr[i]+arr[j]+arr[k]==x)
                    cout<<"triplet exists"<<endl;
                    ans=1;
                }
            }
        }
       cout<<ans<<endl;
    }
    return 0;
}
