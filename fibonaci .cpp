#include<bits/stdc++.h>
using namespace std;

void fibo(int n,int a, int b)
{
    int r;
    cout<<" "<<b;
    r=b;
    b=b+a;
    a=r;
    if(b<n)
        fibo(n,a,b);
    else
        return;
}
int main()
{
    int n, a=0,b=1;
    cin>>n;
    cout<<a;
    fibo(n,a,b);

    return 0;
}
