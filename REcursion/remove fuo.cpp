#include<bits/stdc++.h>
using namespace std;
string remove(string s){
    if(s.size()==0){
        return "";
    }
    char ch = s[0];
    string ans = remove(s.substr(1) );
    
    if(ch == ans[0]){
        return ans;
    }
    return (ch + ans);
}
int main(){
    string s;
    cin>>s;
    cout<<remove(s);
}