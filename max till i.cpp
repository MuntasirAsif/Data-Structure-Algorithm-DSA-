#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int m=INT_MIN;

    int i=0;
    while (i<n)
    {
        m=max(m,arr[i]);
        cout<<m<<" ";
        i++;
    }
    
}