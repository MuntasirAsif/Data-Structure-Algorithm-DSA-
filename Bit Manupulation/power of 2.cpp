#include<bits/stdc++.h>
using namespace std;
int pw(int n){
    return ((n & (n-1))==0);
}
int main(){
    int n;
    cin>>n;
    if(pw(n))
    {
        cout<<"Power of 2"<<endl;
    }
    else
        cout<<"not power of 2";
}