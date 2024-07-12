#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data = val;
        next = NULL;
    }
};
void pushstack(node* &head, int val){
    node* n = new node(val);
    if(head==NULL){
        head = n;
        return;
    }
    node* temp = head;
    while(temp-> next != NULL){
        temp =temp->next;
    }
    temp->next = n;
}
void popstack(node* &head){
    if(head->next == NULL){
        cout<<"Stack is under follow"<<endl;
        return;
    }
    else{
        node* temp =head;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }

        node* del =temp->next;
        temp->next=temp->next->next;
        delete del;
    }
}
void display(node* head){
    node* temp =head;
    while (temp!= NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;  
}
int main(){
    node* head = NULL;
    cout<<"press 1 for push"<<endl<<"press 2 for pop"<<endl<<"3 for display ";
    while(true){
        int k ,n;
        cin>>k;
        switch (k){
            {
            case 1:
                int d;
                cin>>d;
                pushstack(head,d);
                cout<<"push done";
            break;
        }
        case 2:{
            
            popstack(head);
            cout<<"pop done";
        
            break;
        }
            
        default:
        display(head);
            break;
        }
    }
}