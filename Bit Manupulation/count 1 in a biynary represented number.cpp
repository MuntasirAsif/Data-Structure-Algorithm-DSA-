#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=1;
    cin>> n;
    while ((n & (n-1))!=0)
    {
        c++;
        n--;
    }
    cout<<c<<endl;
}