#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n>0){
        int n1;
        int le1,le2;
        cin>>n1;
        long int arr[n1],arr1[n1];
        for(int i=0;i<n1;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n1;i++){
            cin>>arr1[i];
        }
        le1=sizeof(arr)/sizeof(arr[0]);
        sort(arr,arr+le1);
        le2=sizeof(arr1)/sizeof(arr1[0]);
        sort(arr1,arr1+le2);
        long long q=0;
        for(int i=0;i<n1;i++){
            if(arr[i]>arr1[i]){
                q=q+arr1[i];
            }else if(arr[i]<arr1[i]){
                q=q+arr[i];
            }
        }
        cout<<q<<endl;
        n--;
    }
    return 0;
}