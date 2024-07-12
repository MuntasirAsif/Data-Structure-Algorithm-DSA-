#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r;
    bool k;
    cin>>n;
    int position;
    cin>>position;
    r=(1<<position);
    k=((r & n)!=0);
    cout<<(k);
}