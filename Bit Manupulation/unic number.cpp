#include<stdio.h>
using namespace  std;
int unique(int arr[], int n)
{
    int xorsum=0;
    for(int i=0; i<n; i++)
    {
        xorsum=xorsum^arr[i];
    }
    int setbit=0;
    int pos=0;
    while (setbit!=1)
    {
        setbit=xorsum & 1;
        pos++;
        xorsum =xorsum>>1;
    }
    int newxor=0;
    for(int i=0; i<n; i++)
    {
        if(setbit(arr[i],pos-1))
        {
            newxor=newxor^aee[i];
        } 
    }
}
int main()
{
     
}