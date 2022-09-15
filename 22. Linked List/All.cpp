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
void deletion(node* &head, int val){
// good practise to Conner case to delete
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
node* reverse(node* &head){//iterator method
    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr;
    while(currptr!=NULL){
        nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
    }
    return prevptr;
}
node* reverseRecursive(node* &head){
    if(head==NULL || head->next==NULL){
        return head;   //base case
    }
    node* newhead = reverseRecursive(head->next);
    head->next->next = head;
    head->next = NULL;

    return newhead;
}
node* reverseknodes(node* &head, int k){
    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr;

    int count = 0;
    while(currptr!=NULL && count<k){
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
        count++;
    }
    if(nextptr!=NULL){
        head->next = reverseknodes(nextptr,k);
    }
    return prevptr;
}

void MakeCycle(node* &head, int pos){
    node* temp = head;
    node* startNode;

    int count = 1;
    while(temp->next!=NULL){
        if(count==pos){
            startNode = temp;
        }
        temp = temp->next;
        count++;
    }
    temp->next = startNode;
}
bool DetectCycle(node* &head){
    node* slow = head;
    node* fast = head;

    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;

        if(fast==slow){
            return true;
        }
    }
    return false;
}
void RemoveCycle(node* head){
    node* slow = head;
    node* fast = head;
    do{
        slow = slow->next;
        fast = fast->next->next;
    }while(slow!=fast);

    fast = head;
    while(slow->next!=fast->next){
        slow = slow->next;
        fast = fast->next;
    }
    slow->next = NULL;
}
int main(){
    node* head = NULL;
    insertAtTail(head,1); 
    insertAtTail(head,2); 
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    display(head);  // 1->2->3->4->5->NULL
    
    insertAtHead(head,4);
    display(head); // 4->1->2->3->4->5->NULL
    
    cout<<search(head,2)<<endl;  // 1

    deletion(head,2);
    display(head); // 4->1->3->4->5->NULL
    
    deleteAtHead(head);
    display(head); // 1->3->4->5->NULL

    node* newhead = reverse(head);
    display(newhead);  // 5->4->3->1->NULL

    node* Newhead = reverseRecursive(newhead);
    display(Newhead);  // 1->3->4->5->NULL
    
    MakeCycle(Newhead,3);
    // display(head);  // infinite loop run  
    cout<<DetectCycle(Newhead)<<endl;  // 1
   
    RemoveCycle(Newhead);
    // display(Newhead);  // 1->3->4->5->NULL
    cout<<DetectCycle(Newhead)<<endl;  // 0
    
    display(Newhead);  // 1->3->4->5->NULL

    int k = 2;
    node* new_head = reverseknodes(Newhead,k);
    display(new_head);  // 3->1->5->4->NULL
    return 0;
}
