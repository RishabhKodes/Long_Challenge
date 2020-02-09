#include <iostream>
using namespace std;

int main()
{
    int n1;
    cin>>n1;
    while(n1>0){
    int n,d;
    long long int k;
    cin>>n>>k;
    long long int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long a=0;
    for(int i=0;i<n;i++){
        d=arr[i]%k;
        a=a+d;
    }
    cout<<a%k<<endl;    
    n1--;    
    }
    
    return 0;
}

