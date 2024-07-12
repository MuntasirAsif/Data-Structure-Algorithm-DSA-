#include<iostream>
using namespace std;
class student{
    public: 
    string name;
    int roll;
    int marks;
    void printInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll: "<<roll<<endl;
        cout<<"Marks: "<<marks<<endl<<endl;
    }
};
int main(){
    student a[5];
    for(int i=0; i<5; i++){
        cin>>a[i].name;
        cin>>a[i].roll;
        cin>>a[i].marks;
    }
    for (int i = 0; i < 5; i++)
    {
        a[i].printInfo();
    }
    
}