#include<bits/stdc++.h>
using namespace std;
int main(){
    int *p= new int();
    *p=4;
    cout<<*p<<endl;
    delete(p);
    p=new int[4];
    for(int i=0; i<4; i++){
        cin>>*(p+i);
    }
    for(int i=0; i<4; i++){
        cout<<*(p + i)<<"  ";
    }
    delete []p;
    p=NULL;
}