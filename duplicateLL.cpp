#include <iostream>
using namespace std;
struct node{
    public: 
    int data;
    node* next;
    node* random;
    node(int val){
        data = val;
        next = NULL;
        random = NULL;
    }
};
node* clone(node *start)
{
    node* curr = start, *temp;
 
    // insert additional node after
    // every node of original list
    while (curr)
    {
        temp = curr->next;
 
        // Inserting node
        curr->next = new node(curr->data);
        curr->next->next = temp;
        curr = temp;
    }
 
    curr = start;
 
    // adjust the random pointers of the
    // newly added nodes
    while (curr)
    {
        if(curr->next)
            curr->next->random = curr->random ?
                                 curr->random->next : curr->random;
 
        // move to the next newly added node by
        // skipping an original node
        curr = curr->next?curr->next->next:curr->next;
    }
 
    node* original = start, *copy = start->next;
 
    // save the start of copied linked list
    temp = copy;
 
    // now separate the original list and copied list
    while (original && copy)
    {
        original->next =
         original->next? original->next->next : original->next;
 
        copy->next = copy->next?copy->next->next:copy->next;
        original = original->next;
        copy = copy->next;
    }
 
    return temp;
}
 
void print(node* head)
{
    node *ptr = head;
    while (ptr)
    {
        cout << "Data = " << ptr->data << ", Random  = "
             << ptr->random->data << endl;
        ptr = ptr->next;
    }
}
 
// T
int main()
{
    node* start = new node(1);
    start->next = new node(2);
    start->next->next = new node(3);
    start->next->next->next = new node(4);
    start->next->next->next->next = new node(5);
 
    // 1's random points to 3
    start->random = start->next->next;
 
    // 2's random points to 1
    start->next->random = start;
 
    // 3's and 4's random points to 5
    start->next->next->random =
                    start->next->next->next->next;
    start->next->next->next->random =
                    start->next->next->next->next;
 
    // 5's random points to 2
    start->next->next->next->next->random =
                                      start->next;
 
    cout << "Original list : \n";
    print(start);
 
    cout << "\nCloned list : \n";
    node* cloned_list = clone(start);
    print(cloned_list);
 
    return 0;
}