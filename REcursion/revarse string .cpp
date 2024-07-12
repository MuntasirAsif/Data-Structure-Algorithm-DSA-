#include<bits/stdc++.h>
using namespace std;
void restr(string s){
    if(s.size()==0){
        return;
    }
    string ros = s.substr(1);
    restr(ros);
    cout<<s[0];
}
int main(){
    string s;
    cin>>s;
    restr(s);
}