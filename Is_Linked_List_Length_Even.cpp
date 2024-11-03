/*structure of a node of the linked list is as
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};
*/
class Solution {
  public:
    bool isLengthEven(struct Node **head) {
        // Code here
        int len=0;
        Node* curr=head[0];
        while(curr){
            len++;
            curr=curr->next;
        }
        return len%2==0;
    }
};