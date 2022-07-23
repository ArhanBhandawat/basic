#include <iostream>
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
void Insertnum(node* &head, int num){
    node* n = new node(num);
    if(head == NULL){
        head = n;
        return;
    }
    node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = n;
} 

node* reverse(node* head)
    {
        if (head == NULL || head->next == NULL)
            return head;
        node* rest = reverse(head->next);
        node* headNext = head->next;
        headNext->next = head;
        head->next = NULL;
        return rest;
    }
node* middle(node* head){
    node* slow = head;
    node* fast = head;
    while(fast!=NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
bool palindrome(node* head){
    if (head == NULL){
        return true;
    } 
    node* mid = middle(head);
    node* last = reverse(mid->next);
    node* cur = head;
    while(last!=NULL){
        if(last->data!=cur->data){
            return false;
        }
        last = last->next;
        cur = cur->next;    
    }
    return true;
}
void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<< " ";
        temp=temp->next;
    }
    cout<< endl;
}
int main(){
    node* head = NULL;
    Insertnum(head, 1);
    Insertnum(head, 2);
    Insertnum(head, 2);
    Insertnum(head, 4);
    if(palindrome(head) == true){
        cout<< "haan bhai";
    }
    else {
        cout<< "naa bhai";
    }
    return 0;
}