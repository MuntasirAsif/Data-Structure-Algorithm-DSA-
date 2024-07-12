#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int m= INT_MAX;
    int mi=INT_MIN;
    for(int i=0; i<n; i++)
    {
        m = min(m,arr[i]);
        mi = max(mi,arr[i]);
    }
    cout<<"maximum is = "<<mi<<endl;
    cout<<"minimmum is = "<<m<<endl;

}