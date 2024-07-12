#include<bits/stdc++.h>
using namespace std;
void primefactor(int n){
    int arr[100]={0};
    for(int i=2; i<n; i++){
        arr[i]=i;
    }
    
    for(int i=0; i<n; i++){
        if(arr[i]==i){
            for(int j=i*i; j<n; j+=i){
                if(arr[j]==j){
                    arr[j]=i;
                }
            }
        }
    }

}
int main()
{

}