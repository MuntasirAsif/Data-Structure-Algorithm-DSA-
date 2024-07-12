#include<bits\stdc++.h>
#include<climits>
using namespace std;
int main()
{
    int arr[10];
    for(int i=0; i<10; i++)

    {
        cin>>arr[i];
    }
    int Max=INT_MIN;
    int Min=INT_MAX;
    for(int i=0; i<10; i++)
    {
        Max= max(Max,arr[i]);
        Min= min(Min,arr[i]);
    }
    cout<<"maximum = "<<Max<<endl<<"minimum= "<<Min;
    return 0;
}