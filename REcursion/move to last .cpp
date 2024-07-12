#include<bits/stdc++.h>
using namespace std;
string moved(string s){
    if(s.size()==0){
        return "";
    }
    char ch = s[0];
    string ans = moved (s.substr(1));
    if (ch != 'x' ){
        return (ch+ans);
    }
    return (ans+ch);
}

int main(){
    string s;
    cin>>s;
    cout<<moved(s);
}