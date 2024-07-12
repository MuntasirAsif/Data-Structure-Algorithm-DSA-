#include<bits/stdc++.h>
using namespace std;
int pn(int p, int n)
{
    int pw;
    if(n==0)
    {
        return 1;
    }
   
        return pw = p* pn(p,n-1);  
}
int main()
{
    int p,n;
    cin>>p>>n;
    cout<<pn(p,n);
}