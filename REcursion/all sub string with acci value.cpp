#include<bits/stdc++.h>
using namespace std;
void substring(string s, string ans){
    if(s.size()==0){
        cout<<ans<<endl;
        return;
    }
    char ch = s[0];
    int x= (int)ch;
    string ros=(s.substr(1));
    substring(ros,ans);
    substring(ros,ans+ch);
    substring(ros,ans+ to_string(x));
}
int main(){
    string s;
    cin>>s;
    substring(s,"");
}