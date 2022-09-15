#include<bits/stdc++.h>
using namespace std;
class node{
public:
    int data;
    node* next;
    node* prev;

    node(int val){
        data = val;
        next = NULL;
        prev = NULL;
    }
};
void insertAtHead(node* &head, int val){
    node* n = new node(val);
    n->next = head;
    if(head!=NULL){
        head->prev = n;
    }
    head = n;
}
void insertAtTail(node* &head, int val){
    if(head==NULL){
        insertAtHead(head,val);
        return;
    }

    node* n = new node(val);
    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
}
void display(node* head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
int length(node *head){
    int l = 0;
    node* temp = head;
    while(temp != NULL){
        l++;
        temp = temp->next;
    }
    return l;
}
node* kappend(node* &head, int k){
    node* newHead;
    node* newTail;
    node* Tail = head;
    
    int l = length(head);
    k = k%l;
    int count = 1;
    
    while(Tail->next != NULL){
        if(count==l-k){
            newTail = Tail;
        }
        if(count==l-k+1){
            newHead = Tail;
        }
        
        Tail = Tail->next;
        count++;
    }
    newTail->next = NULL;
    Tail->next = head;

    return newHead;
}
int main(){
    node* head = NULL;
    int arr[] = {1,2,3,4,5,6};
    for(int i=0;i<6;i++){
        insertAtTail(head,arr[i]);
    }
    display(head); // 1->2->3->4->5->6->NULL

    node* newHead = kappend(head,3);
    display(newHead); // 4->5->6->1->2->3->NULL

    return 0;
}