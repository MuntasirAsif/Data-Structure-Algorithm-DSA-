#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,rev=1,m;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int arr2[n-1];
    for(int i=0; i<n-1; i++)
    {
        arr2[i]=arr[i+1]-arr[i];
    }
        for(int i=0; i<n; i++)
    {
        if(arr2[i]!=arr2[i-1])
        {
            m=max(m,rev);
            rev=1;
        }
        else
        {
            rev++;
        }
    }
    m=max(m,rev);
    cout<<m+1<<endl;
}