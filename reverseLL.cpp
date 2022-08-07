#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    
    node (int val){
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
void reverselist(node* &head){
    node* prev = NULL;
    node* cur = head;
    while(cur!=NULL){
        node* temp = cur->next;
        cur->next = prev;
        prev = cur;
        cur = temp;    
    }
    head = prev;
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
    Insertnum(head,1);
    Insertnum(head,2);
    Insertnum(head,3);
    Insertnum(head,3);
    Insertnum(head,3);
    Insertnum(head,3);
    Insertnum(head,3);
    Insertnum(head,3);
    Insertnum(head,3);
    Insertnum(head,3);
    display(head);
    cout << "\n";
    reverselist(head);
    display(head);
    return 0;

}