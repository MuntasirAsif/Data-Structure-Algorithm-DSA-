#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str,str2;
    getline(cin,str);
    getline(cin,str2);
    cout<<"String 01: "<<str<<endl;
    cout<<"String 02: "<<str2<<endl;

    str.append(str2);//apped
    cout<<"appending string is: "<<str<<endl;

    //str.clear();//empty
    if(str.empty())
    {
        cout<<"str is clear"<<endl;
    }
    else
    {
        cout<<"string is exist"<<endl;
    }
    int r=0;
    str.erase(0,2);//erase
    cout<<"After erasing 2 elemrnt form next 2: "<<str<<endl;

    cout<<"Finding this in positin : "<<str.find("a")<<endl;//finding 

    str.insert(3,"ta");//insetring
    cout<<"After Inserting in positoin 3 : "<<str<<endl;

    int s=str.size();//size aslo can use length
    cout<<"Current Size is : "<<s<<endl;

    string sub= str.substr(9);//sub string 
    cout<<"Substring form 9th position : "<<sub<<endl;

    sub= str.substr(7,5);//sub string postion to length
    cout<<"Substring form 7th to next 5 position : "<<sub<<endl;

    string num ="32258461";//string to integer
    int x= stoi(num);
    cout<<"convet int : "<<x<<endl;

    x=788;
    num= to_string(x);// integer to stirng 
    cout<<"convert String : "<<num + "ok?"<<endl;

    sort(str.begin()+4 , str.end()-4);//sort
    cout<<str<<endl;

    transform(str.begin(), str.end(), str.begin(), :: toupper);//upper case
    cout<<"Uppeer case: "<<str<<endl;
    transform(str.begin(), str.end(), str.begin(), :: tolower);//lower case
    cout<<"Loer case"<<str<<endl;
    reverse(str.begin(), str.end());
    cout<<str;

}