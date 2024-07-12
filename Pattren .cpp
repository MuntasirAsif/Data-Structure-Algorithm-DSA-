#include<iostream>

using namespace std;
int main()
{
    /*
    //Sold rectangle
    int i,j,row,col;
    cout<<"Enter row and coloumn: "<<endl;
    cin>>row>>col;
    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
             cout<<"*";
        }
        cout<<"\n";
        }
    return 0;*/





    //Holow REctangle:

    /*int i,j,row,col;
    cout<<"Enter row and coloumn: "<<endl;
    cin>>row>>col;
    for(i=1; i<=row; i++){
        for(j=1; j<=col; j++){
            if(i==1 || i==row  || j==1 || j==col )
             cout<<"*";
             else
                cout<<" ";
        }
        cout<<"\n";
    }
    return 0;*/





    //Half pyramid:
    /*int i,j,row;
    cout<<"Enter the row number: ";
    cin>>row;
    for(i=1; i<=row; i++){
        for(j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<"\n";
    }*/







    //revarse half pyramid

    /*int i,j,row;
    cout<<"Enter the row number: ";
    cin>>row;
    for(i=row; i>=1; i--){
        for(j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<"\n";
    }*/
//    int i,j,row;
//    cout<<"Enter the row number: ";
//    cin>>row;
//    for(i=row; i>=0; i--){
//        for(j=1; j<=i; j++){
//            cout<<" ";
//        }
//        for(j=row; j>=i; j--){
//            cout<<"*";
//        }
//
//        cout<<"\n";
//    }
    /*int i,j,row;
    cout<<"Enter the row number: ";
    cin>>row;
    for(i=row; i>=1; i--){
        for(j=1; j<=row; j++){
            if(i-1>=j)
                cout<<" ";
            else
                cout<<"*";
        }

        cout<<"\n";
    }*/

    int i,j,n;
    cin>>n;
    cout<<"\n";
    for(int i=0; i<=n*2; i++){
        for(j=0; j<=n*2; j++){
            if(j>i && n*2-i>j){
                cout<<" ";
            }
            else if(i>n+1 && n*2-i<j && i>j)
                cout<<" ";
            else
                cout<<"*";
        }
        cout<<endl;
    }


}
