/*structure of the node of the DLL is as
struct Node {
    int data;
    struct Node* prev, *next;
};
*/
// function should insert a new node in sorted way in
// a sorted doubly linked list
// Return the head after insertion
class Solution {
  public:
    Node* sortedInsert(Node* head, int x) {
        // Code here
        Node* curr=head;
        Node* pr=NULL;
        while(curr && curr->data<x ){
            pr=curr;
            curr=curr->next;
        }
        Node* temp =new Node();
        temp->data=x;
        
        if(curr==head){
            temp->next=curr;
            curr->prev=temp;
            return temp;
        }
        if(!curr){
            pr->next=temp;
            temp->prev=pr;
            return head;
        }
        
        pr->next=temp;
        temp->next=curr;
        curr->prev=temp;
        temp->prev=pr;
        return head;
    }
};
