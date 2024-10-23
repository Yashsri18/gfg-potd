class Solution {
  public:
    /*Structure of the node of the linled list is as

    struct Node {
        int data;
        struct Node* next;

        Node(int x){
            data = x;
            next = NULL;
        }
    };
    */
    // your task is to complete this function
    // function should return sum of last n nodes
    int sumOfLastN_Nodes(struct Node* head, int n) {
        // Code hereint c
        int count = 0, N=0 ,ans=0;
        Node* curr= head;
        while(curr){
            N++;
            curr=curr->next;
        }
        
        while(head){
            count++;
            if(count>=N-n+1)ans+=head->data;
            head=head->next;
        }
        return ans;
    }
};