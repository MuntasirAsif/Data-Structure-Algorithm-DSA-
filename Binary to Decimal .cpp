#include<bits\stdc++.h>
using namespace std;
int convert( int n)
{
    int i=0,r=0;

    while(n>0)
    {
       int a= n%10;
       n=n/10;
       r=r+a*pow(2,i);
       i++; 
    }
    return r;
}
int main()
{
    int a;

    cin>>a;
    cout<<"DECIMAL = "<<convert(a)<<endl;

    return 0;
}