#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,r=0,m=0;
    int re;
    cin>>a;
    while(a>0)
    {
        r=a%10;
        a=a/10;
        m=m*10+r;
    }
    cout<<m;
}
