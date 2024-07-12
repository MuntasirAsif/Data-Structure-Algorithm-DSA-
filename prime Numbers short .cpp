#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a;
    int flag=0;
    cin>>a;
    for(int i=2; i<=sqrt(a); i++)
    {
        if(a%i==0){
            flag=1;
            break;
        }
    }

    if(flag==0){
        cout<<"prime Number"<<endl;
    }

    else{
        cout<<"Not prime"<<endl;
    }
return 0;
}
