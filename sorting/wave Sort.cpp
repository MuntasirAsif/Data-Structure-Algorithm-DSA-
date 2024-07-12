#include<bits/stdc++.h>
using namespace std;
/*  5      6       8        4       61       8
        1      2       2        3        4
*/
void waveSort(int arr[],int n){
    int i=1;
    while(i<=n){

        if(arr[i]>arr[i-1]){
            swap(arr[i],arr[i-1]);
        }

        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }

        i+=2;
    }
}
int main(){

    int arr[]={2,5,1,6,3,8,2,4,61,8,4};
    waveSort(arr, (sizeof(arr)/sizeof(int)));

    for(int i=0; i<(sizeof(arr)/sizeof(int)); i++){
        cout<<arr[i]<<" ";
    }
    
}