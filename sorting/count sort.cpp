#include<bits/stdc++.h>
using namespace std;
void countSort(int arr[], int n){
    int k=arr[0];
    for(int i=0; i<=n; i++){
        k=max(arr[i],k);
    }
    int count[k]={0};
    for(int i=0; i<n; i++){
        count[arr[i]]++;
    }
    for(int i=1; i<=k; i++){
        count[i] = count[i] + count[i-1];
    }
    int out[n];
    for(int i=n; i>=0; i--){
        out[--count[arr[i]]]=arr[i];
    }
    for(int i=0; i<n; i++){
        arr[i]=out[i];
    }

}
int main(){
    int arr[]={7, 8, 3, 2, 4, 5, 2, 3, 4, 1};
    countSort(arr,(sizeof(arr)/sizeof(arr[0])));
    for(int i=0; i<10; i++){
        cout<<arr[i]<<" ";
    }
}