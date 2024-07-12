//nth fibo number 
#include<bits/stdc++.h>
using namespace std;
int fibo(int n)
{
     int a=0,b=1;
     if(n==0 || n==1)
     {
        return n;
     }
     return  fibo(n-1) + fibo (n-2);

}
int main()
{
    int n;
    cin>>n;
    cout<< fibo(n);
}