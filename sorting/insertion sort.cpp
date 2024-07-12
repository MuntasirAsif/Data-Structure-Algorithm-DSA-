#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int arr[n];
    for( i=0; i<n; i++){
        cin>>arr[i];
    }
    for( i=1; i<n; i++){
        int curr=arr[i];
        int j=i-1;
        while(curr<arr[j]&&j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=curr;
    }
    for( i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}