#include<bits/stdc++.h>
using namespace std;
int arr[5];
int top =-1;
void push(int x){
    if(top<5-1){
        top = top+1;
        arr[top]=x;
    }

    else{
        cout<<"Stack Overfollow"<<endl;
    }

}

void pop(){
    if(top>=0){
        arr[top]=NULL;
        top=top-1;
    }
    else{
        cout<<"stack Under follow";
    }
}
void display(){
    for(int i=0; i<=top; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"NULL"<<endl;
}
int main(){
    while(true){
        cout<<"press 1 for push"<<endl<<"press 2 for pop"<<endl<<"press others to exit: ";
        int k ,n;
        cin>>k;
        if(k==1){
            cout<<"how many value you want to push: ";
            cin>>n;
            for(int i=0; i<n; i++){
                int d;
                cin>>d;
                push(d);
                display();
            }
        }
        if(k==2){
            cout<<"how many value you want to pop: ";
            cin>>n;
            for(int i=0; i<n; i++){
                pop();
                display();
            }
        }
        if(k>2){
            break;
        }
    }
}