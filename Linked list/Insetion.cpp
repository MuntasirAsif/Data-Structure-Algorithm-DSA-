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

void insert(node* &head, int val){
    node* n = new node(val);
    if (head == NULL) {
        head = n;
        return;
    }
    node* temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    
}
void display (node* head){
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
    cout<<"How many value do you want to enter: ";
    cin>>n;
    for(int i=0 ; i<n; i++){
        int d;
        cin>> d;
        insert(head,d);
        display(head);
    }
}