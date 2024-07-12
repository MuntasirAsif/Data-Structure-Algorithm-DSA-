#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    int factorial;
    return factorial = n*(n-1);
}
int main()
{
    int n;
    cin>>n;
    cout<<fact(n);
}