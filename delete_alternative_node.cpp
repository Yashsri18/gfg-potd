/*
Structure of the node of the binary tree
struct Node
{
    int data;
    struct Node *next;

    Node(int x){
        int data = x;
        next = NULL;
    }
};
*/
// Complete this function
class Solution {
  public:
    void deleteAlt(struct Node *head) {
        // Code here
        Node* prev=head;
        Node* curr=head->next;
        int count=0;
        while(curr){
            if(curr->next==NULL){
                prev->next=NULL;
                return ;
            }
            prev->next=curr->next;
            prev=curr->next;
            if(prev->next)
            curr=prev->next;
            else return ;
            if(curr->next==NULL){
                prev->next=NULL;
                return ;
            }
        }
        return ;
    }
};
