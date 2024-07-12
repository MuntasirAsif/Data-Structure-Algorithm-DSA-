#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,arm=0;
    cin>>a;
    int b=a;
    while(a>0)
    {
        int r = a%10;
        arm = arm+pow(r,3);
        a/=10;
    }
    if(arm==b)
    {
        cout<<b<<": Number is armstrong"<<endl;
    }
    else
    {
        cout<<b<<": Number not armstrong"<<endl;
    }
}
