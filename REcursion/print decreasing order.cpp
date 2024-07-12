#include<bits/stdc++.h>
using namespace std;
void dec(int n){
    if(n==0){
        return;
    }
    dec(n-1);
    cout<<n;
}
int main(){
    int n;
    cin>>n;
    dec(n);
}