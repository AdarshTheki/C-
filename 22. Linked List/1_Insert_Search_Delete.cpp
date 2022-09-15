#include<bits/stdc++.h>
using namespace std;
// Insert in Linked list: 
// insert at head, insert at tail, search, delete, delete at head & displayed.
class node{
    public:
        int data;
        node* next;

        node(int val){
            data = val;
            next = NULL;
        }
};
void insertAtHead(node* &head, int val){
    node* n = new node(val);
    n->next = head;
    head = n;
}
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
bool search(node* head, int key){
    node* temp = head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp = temp->next;
    }
    return false;
}
void deleteAtHead(node* &head){
    node* todelete = head;
    head = head->next;
    
    delete todelete;
}
void delection(node* &head, int val){
    // good practies to conner case to delete
    if(head==NULL){
        return;
    }
    if(head->next==NULL){
        deleteAtHead(head);
        return;
    }

    node* temp = head;
    while(temp->next->data!=val){
        temp = temp->next;
    }
    node* todelete = temp->next;
    temp->next = temp->next->next;

    delete todelete;
}
int main(){
    node* head = NULL;
    insertAtTail(head,1); 
    insertAtTail(head,2); 
    insertAtTail(head,3);
    display(head);          // 1->2->3->NULL
    
    insertAtHead(head,4);
    display(head);          // 4->1->2->3->NULL
    
    cout<<search(head,2)<<endl;   // 1

    delection(head,2);
    display(head);          // 4->1->3->NULL
    
    deleteAtHead(head);
    display(head);          // 1->3->NULL
    return 0;
}