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
void insertAtTail(node* &head, int val){
    node* n = new node(val);
    if(head==NULL){
        head = n;
        return;
    }
    node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = n;
}
void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

node* reverseRecursive(node* &head){        // recursive way
    if(head==NULL || head->next==NULL){
        return head;   //base case
    }
    node* newhead = reverseRecursive(head->next);
    head->next->next = head;
    head->next = NULL;

    return newhead;
}

int main(){
    node* head = NULL;
    insertAtTail(head,1); 
    insertAtTail(head,2); 
    insertAtTail(head,3);
    insertAtTail(head,4);
    display(head);          // 1->2->3->4->NULL
    
    node* newhead = reverseRecursive(head);
    display(newhead);
    return 0;
}