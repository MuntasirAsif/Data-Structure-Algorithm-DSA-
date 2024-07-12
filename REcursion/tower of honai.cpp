#include<bits/stdc++.h>
using namespace std;
void move(int n, char src, char des, char hlpr){
    if(n==0){
        return;
    }
    move(n-1, src , hlpr, des);
    cout<<"Move "<<src<<" to "<<des<<endl;
    move(n-1, hlpr, src, des);
}
int main(){
    int n=5;
    move(n,'A','B','C');
}
