#include<bits\stdc++.h>
using namespace std;
int sum(int n)
{
    int r=0;
    for(int i=1; i<=n; i++)
    {
        r=r+i;
    }
    return r;
}
int main()
{
    int n;
    cin>>n;

    cout<<sum(n);

    return 0;
} 
