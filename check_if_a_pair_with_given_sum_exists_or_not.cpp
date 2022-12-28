#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool chkpair(int arr[] ,int n ,int x)
{
    for(int i=0;i<(n-1);i++){
        for(int j=0;j<n;j++){
            if(arr[i]+arr[j]==x){
                cout<<"a pair with given sum is:"<<arr[i]<<","<<arr[j]<<endl;
            
            return 1;
        }
    }
}return 0;
}
int main(){
    int arr[]={1,4,-3,2,6,-8};
    int x=5;
    int n=sizeof(arr)/sizeof(arr[0]);
    if(chkpair(arr,n,x)){
        cout<<"pair with the given sum exists"<<endl;
    }
    else {
        cout<<"no valid pair"<<endl;
    }
    return 0;
}
