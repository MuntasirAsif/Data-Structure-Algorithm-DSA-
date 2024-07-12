#include<bits/stdc++.h>
using namespace  std;

int main()
{
    int n,mid,first,last,s;
    cin>>n;
    int a[n];
    for(int i=0 ; i<n; i++)
    {
        cin>>a[i];
    }
    cout<<"Enter your seraching Number"<<endl;
    cin>>s;
    first=0;
    last=n;
    mid=n/2;
    while (a[mid]!=s)
    {
        if(mid>s)
        {
            last= mid -1;
            mid = ( first + last )/2;
        }
        else if(a[mid]<s)
        {
            first = mid +1;
            mid = (first+ last)/2;
        }
    }

    cout<<"your number is in position:  "<<mid<<endl;
    return 0;
}