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
void insert(node* &head,int val){
    node* n = new node(val);
    if(head == NULL){
        head = n;
        return;
    }
    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
}
node* revarse(node* &head){
    node* previous = NULL;
    node* currentptr = head;
    node* nxtptr ;

    while(currentptr != NULL){
        nxtptr = currentptr ->next;
        currentptr->next = previous;

        previous = currentptr;
        currentptr =nxtptr;
    }
    return previous;
}
void display(node* head){
    node* temp = head;
    while (temp != NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    node* head =NULL;
    insert(head,1);
    insert(head,2);
    insert(head,3);
    insert(head,4);
    insert(head,5);
    display(head);
    node* newhead = revarse(head);
    display(newhead);

    return 0;
}