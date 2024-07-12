#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string k;
    string z;
    for(int i=0;i<=s.size();i++){
        for(int j=2;j<=s.size();j++){
            k= s.substr(i,j);
            //cout<<k<<endl;
            string m = k;
           // cout<<m<<endl;
            reverse(m.begin(), m.end());
            //cout<<m<<endl;
            int ksi=k.size();
            int jsi=z.size();
            if(m==k ){
                if(ksi>jsi)
                z=k;
            }
            
        }
    }
    cout<<z;
}