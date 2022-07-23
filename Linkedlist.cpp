#include <iostream>
#include <bits/stdc++.h>
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
void insert(node* &head, int num, int pos){
    node* toAdd = new node(num);
    if (pos == 0){
        toAdd->next = head;
        head = toAdd;
        return;
    }
    node* prev = head;
    for (int i = 0; i < pos-1; i++){
       prev = prev->next;
    }
    toAdd->next = prev->next;
    prev->next = toAdd;
}
void deletebyval(node* head, int num){
    node* temp = head;
    node* prev = NULL;
    if(temp!=NULL && head->data == num){
       head = temp->next;
       return;
    }
    else{
   while (temp!=NULL && temp->data!=num){
     prev = temp;
     temp = temp->next; 
   }
   if (temp == NULL){
       return;
   }
   prev->next = temp->next;
   delete temp;
 }
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
    insert(head, 4, 2);
    display(head);
    cout<< "\n" ;
    deletebyval(head, 3);
    display(head);
    return 0;
}
