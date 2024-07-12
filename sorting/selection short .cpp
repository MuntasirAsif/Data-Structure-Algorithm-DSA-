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
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(arr[i]<arr[j])
            {
                int r=arr[i];
                arr[i]=arr[j];
                arr[j]=r;
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<"\t";
    }
    return 0;
}