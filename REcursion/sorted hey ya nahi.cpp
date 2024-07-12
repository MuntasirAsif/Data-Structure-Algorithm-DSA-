#include<bits/stdc++.h>
using namespace std;

bool sorted(int arr[],int n){
    if(n==1){
        return true;
    }
    bool restarr = sorted(arr+1, n-1); 
    if(arr[0]<arr[1] && restarr){
        return true;
    }
    else {
        return false;
    }
}

int main(){
    int  arr[]={1,9,3,4,5};
    cout<<sorted(arr,5)<<endl;
}