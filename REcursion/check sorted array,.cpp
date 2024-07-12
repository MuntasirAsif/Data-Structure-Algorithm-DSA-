#include<bits/stdc++.h>
using namespace std;
bool sorted(int arr[],int n){
    if(n==1){
        return true;
    }
    bool ra = sorted(arr+1,n-1);
    if(arr[0]<arr[1] && ra){
        return true;
    }
    else 
    return false;
}
int main(){
    int arr[5]={2,3,4,5,6};
    cout<<+sorted(arr,5);
    
}