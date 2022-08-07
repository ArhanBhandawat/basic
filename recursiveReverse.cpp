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
    display(head);
    cout << "\n";
     node* newlist = reverse(head);
     display(newlist);
    
    return 0;

}