#include<iostream>
#include<cmath>

using namespace std;
bool isPrime(int x)
{
    int flag=1;
    for(int i=2; i<=sqrt(x); i++)
    {
        if(x%i==0){
            return false;
        }
    }
    return true;
}

int main()
{

    int a,b;
    cin>>a>>b;

    for(int i=a; i<=b; i++)
    {
        if(isPrime(i))
        {
            cout<<i<<"\t";
        }
    }
}
