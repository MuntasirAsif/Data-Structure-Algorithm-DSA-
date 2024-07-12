#include<bits/stdc++.h>
using namespace std;
void replace(string s){
    if(s.size()==0){
        return;
    }
    if(s[0]=='p' && s[1]=='i'){
        cout<<"3.14";
        string ros = s.substr(2);
        replace(ros);
    }
    else{
        cout<<s[0];
        string ros = s.substr(1);
        replace(ros);
    }
}
int main(){
    string s;
    cin>>s;
    replace(s);

}