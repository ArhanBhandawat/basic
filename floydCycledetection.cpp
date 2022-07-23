#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data = val;
        next =NULL;
    }
};
void detectCycle(node* head)
{
    
    if (head == NULL || head->next == NULL)
        return;

    node *slow = head, *fast = head;

    
    slow = slow->next;
    fast = fast->next->next;

   
    while (fast && fast->next) {
        if (slow == fast)
            break;
        slow = slow->next;
        fast = fast->next->next;
    }


    if (slow == fast) 
    {
        slow = head;
          
      
          if(slow == fast) {
              while(fast->next != slow) fast = fast->next;
        }
          else {
            while (slow->next != fast->next) {
                slow = slow->next;
                fast = fast->next;
            }
        }

        
        fast->next = NULL; 
    }
}

void push(node* & head, int num){
    node* n = new node(num);
    if(head ==  NULL){
        head = n;
        return;
    }
    node* temp = head;
    while(temp->next!=NULL){
        temp =temp->next;
    }
    temp->next =n;
}
void display(node* head){
    node* temp =head;
    while(temp!=NULL){
        cout << temp->data<< " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    /* Start with the empty list */
    node* head = NULL;
    push(head, 20);
    push(head, 4);
    push(head, 15);
    push(head, 10);
 
    /* Create a loop for testing */
    head->next->next->next->next = head;
    detectCycle(head);
    display(head);
    return 0;
     
}