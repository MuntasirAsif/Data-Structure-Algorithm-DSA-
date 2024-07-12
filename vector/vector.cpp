#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(10);
    v.push_back(4);
    v.push_back(5);
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    v.pop_back();
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    vector <int> :: iterator it;
    for(it=v.begin(); it<v.end(); it++){
        cout<<*it<<endl;
    }
    for(auto element:v){
        cout<<element<<" ";
    }
    vector<int>v2 (2,7);
    cout<<endl;
    sort(v.begin(),v.end());
    for(it=v.begin(); it<v.end(); it++){
        cout<<*it<<" ";
    } cout<<endl;
    swap(v,v2);
     for(int i=0; i<v2.size(); i++){
        cout<<v2[i]<<" ";
    }cout<<endl;
    for(it=v.begin(); it<v.end(); it++){
        cout<<*it<<" ";
    }

}