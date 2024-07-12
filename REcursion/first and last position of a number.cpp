#include<bits/stdc++.h>
using namespace std;
int fs(int arr[],int n,int i,int key){
    if(arr[i]==key){
        return i;
    }
    return fs(arr,n,i+1,key);
    
}
int ls(int arr[],int n,int i,int key){
    if(i==n){
        return 0;
    }
    int dm = ls(arr,n,i+1,key);
    if( dm != 0 ){
        return dm;
    }
    if(arr[i]==key){
        return i;
    }
    return -1;
}


int main(){
    int arr[5]={2,4,3,6,4};
    
    cout<<fs(arr,5,0,4);
    cout<<ls(arr,5,0,4);
}