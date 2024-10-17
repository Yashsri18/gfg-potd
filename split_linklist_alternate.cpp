/*
//day 15 
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
    // Function to split a linked list into two lists alternately
    vector<Node*> alternatingSplitList(struct Node* head) {
        // Your code here
        vector<Node*>ans;
        ans.push_back(head);
        if(head->next)ans.push_back(head->next);
        else return ans;
        Node* prev= head;
        Node* curr= head->next;
        while(curr){
            if(curr->next){
                prev->next=curr->next;
                prev=curr->next;
                
            }else{
                prev->next=NULL;
                 break;
            }
            if(prev->next){
                curr->next=prev->next;
                curr=prev->next;
            }
            else{
                curr->next=NULL;
                break;
            }
        }
        return ans;
    }
};
