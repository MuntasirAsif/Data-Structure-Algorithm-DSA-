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
void insertatTail(node* &head, int val){
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
void deleteinfirst(node* &head){
   
    node* temp= head;
    head = head->next;
    delete temp;
}
void deleteinlast(node* &head){
    if(head == NULL){
        return;
    }
    node* temp =head;
    while(temp->next->next != NULL){
        temp=temp->next;
    }
    node* del =temp->next;
    temp->next = temp->next->next;
    delete del;
}

void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    node* head =NULL;
    int n;
    cout<<"How many values do you want to enter: ";
    cin>>n;
    for(int i=0 ; i<n; i++){
        int d;
        cin>> d;
        insertatTail(head,d);
        display(head);
    }
    cout<<"How many value do you want to delete: ";
    cin>>n;
    for(int i=0; i<n; i++){
        deleteinlast(head);
        display(head);
    }

}