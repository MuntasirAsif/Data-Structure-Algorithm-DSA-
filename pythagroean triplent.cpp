#include<bits\stdc++.h>
using namespace std;
bool check(int x, int y, int z)
{
    int a,b,c;
    a=max(x,max(y,z));
    if(x==a)
    {
        b=y;
        c=z;
    }
    else if(y==a)
    {
        b=x;
        c=z;
    }
    else{
        b=x;
        c=y;
    }
    if(a*a == b*b + c*c)
    {
        return true;
    }
    else 
        return false;
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(check(a,b,c))
    {
        cout<<"pythagoean triplent"<<endl;
    }
    else
        cout<<"not pythagroean triplent"<<endl;
    return 0;
}