#include<bits/stdc++.h>
using namespace std;
class getSet{
    public:
    string name;
    int id;
    private:
    int pin;
    public:
    void setpin(int k){
        pin=k;
    }
    void getinfo(){
        cout<<endl;
        cout<<"Name = "<<name<<endl;
        cout<<"ID = "<<id<<endl;
        cout<<"PIN = "<<pin<<endl;
    }

};
int main(){
    getSet a[3];
    for(int i=0; i<3; i++){
        cin>>a[i].name;
        cin>>a[i].id;
        int k;
        cin>>k;
        a[i].setpin(k);
    }
    for(int i=0; i<3; i++){
        a[i].getinfo();
    }
}