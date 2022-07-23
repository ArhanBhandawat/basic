#include <iostream>
#include <queue>
using namespace std;
#define SIZE(arr) (sizeof(arr)/sizeof(arr[0]))

class node{
    public:
    int data;
    node *next;
    node *child;
};
void flattenList(node *Node){
    if(Node == NULL){
        return;
    }
    node *tmp = NULL;
    node *tail = Node;
    while(tail->next!=NULL){
        tail = tail->next;
    }
    node *cur = Node;
    while(cur!=tail){
        if(cur->child!=NULL){
            tail->next = cur->child;
            tmp = cur->child;
    while(tmp->next!=NULL){
        tmp= tmp->next;
    }
     tail = tmp;
        }
        cur = cur->next;
    }
}
void printlist(node *Node){
    node *temp = Node;
    while(temp!=NULL){
        cout<< temp->data << " ";
        temp = temp -> next;
    }
}
node *createList(int *arr, int n)
{
    node *head = NULL;
    node *p;
 
    int i;
    for (i = 0; i < n; ++i)
    {
        if (head == NULL)
            head = p = new node();
        else
        {
            p->next = new node();
            p = p->next;
        }
        p->data = arr[i];
        p->next = p->child = NULL;
    }
    return head;
}
node *createList(void)
{
    int arr1[] = {10, 5, 12, 7, 11};
    int arr2[] = {4, 20, 13};
    int arr3[] = {17, 6};
    int arr4[] = {9, 8};
    int arr5[] = {19, 15};
    int arr6[] = {2};
    int arr7[] = {16};
    int arr8[] = {3};
 
    /* create 8 linked lists */
    node *head1 = createList(arr1, SIZE(arr1));
    node *head2 = createList(arr2, SIZE(arr2));
    node *head3 = createList(arr3, SIZE(arr3));
    node *head4 = createList(arr4, SIZE(arr4));
    node *head5 = createList(arr5, SIZE(arr5));
    node *head6 = createList(arr6, SIZE(arr6));
    node *head7 = createList(arr7, SIZE(arr7));
    node *head8 = createList(arr8, SIZE(arr8));
 
 
    /* modify child pointers to
    create the list shown above */
    head1->child = head2;
    head1->next->next->next->child = head3;
    head3->child = head4;
    head4->child = head5;
    head2->next->child = head6;
    head2->next->next->child = head7;
    head7->child = head8;
 
 
    /* Return head pointer of first
    linked list. Note that all nodes are
    reachable from head1 */
    return head1;
}
int main(void)
{
    node *head = NULL;
    head = createList();
    flattenList(head);
    printlist(head);
    return 0;
}
 

   