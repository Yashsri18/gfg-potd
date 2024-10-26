class Solution {
  public:
    int count(struct Node* head, int key) {
        // add your code here
        int ans= 0 ;
        while(head){
            if(head->data==key)ans++;
            head=head->next;
        }
        return ans;
    }
};