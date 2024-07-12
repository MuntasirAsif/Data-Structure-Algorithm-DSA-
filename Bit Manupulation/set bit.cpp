#include<bits/stdc++.h>
using namespace std;
int GetBit(int n, int pos){
        return ((n & (1<<pos))!=0);
}
int setbit(int n, int pos){
    return (n| (1<<pos));
}
int clearbit(int n, int pos){
    return (n& ~(1<<pos));
}
int updatebit(int n, int pos){
    int r=clearbit(n,pos);
    return (setbit(r,pos));
}
int main(){
    int n, pos;
    cin>>n>>pos;
    cout<<"Bit of this postion is "<<(GetBit(n,pos))<<endl;
    cout<<"After Set a Bit on your position "<<(setbit(n,pos))<<endl;
    cout<<"After clearing the position "<<clearbit(n,pos)<<endl;
    cout<<"After updating the position "<<updatebit(n,pos);
    return 0;
}
