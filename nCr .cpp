#include<bits/stdc++.h>
using namespace std;
int fact(int x)
{
    int r=1;
    while(x>0)
    {
        r=r*x;
        x--;
    }
    return r;
}
int main()
{
    int n,r,m;
    cin>>m;
    cout<<"[";
    for(n=1; n<m; n++){
        cout<<"[";
        for(r=0; r<n; r++){
            int a= fact(n)/(fact(n-r)*fact(r));
             cout<<a;
             if(r!=n-1)
             cout<<",";
        }
        cout<<"]";
        if(n!=m-1)
        cout<<",";
    }
    cout<<"]";
    return 0;
}
