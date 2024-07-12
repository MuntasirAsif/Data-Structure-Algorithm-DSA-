#include<bits/stdc++.h>
using namespace std;
void dnf(int arr[], int st, int mid, int end){
    while (mid<=end){
        if(arr[mid]==0){
            swap(arr[st],arr[mid]);
            mid++; st++;
        }
        else if(arr[mid]==2){
            swap(arr[mid],arr[end]);
            end--;
        }
        else{
            mid++;
        }
    }
}
int main(){
    int arr[]={1,2,1,1,0,2,0,1};
    dnf(arr,0,0,7);

    for(int i=0; i<7; i++){
        cout<<arr[i]<<" ";
    }
}