// User function Template for C++
// day 18
/*
// a node of the doubly linked list
class DLLNode
{
public:
    int data;
    DLLNode *next;
    DLLNode *prev;
    DLLNode(int val)
    {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
*/
class Solution {
  public:
    // function to sort a k sorted doubly linked list
    DLLNode *sortAKSortedDLL(DLLNode *head, int k) {
        
        if(!head) return NULL;
        priority_queue<int,vector<int>,greater<int>>pq;
        
        DLLNode *temp = head;
        
        for(int i=0;i<=k && temp ;i++){
          pq.push(temp->data);
          temp=temp->next;
        }
      
       
       DLLNode *ansHead = new DLLNode(-1);
       DLLNode *ansTail = ansHead;
       
       while(!pq.empty()){
            int minVal = pq.top();
            pq.pop();
            DLLNode *newNode = new DLLNode(minVal);
            ansTail->next = newNode;
            newNode->prev = ansTail;
            ansTail = newNode;
            
            if(temp){
                pq.push(temp->data);
                temp=temp->next;
            }
       }
       return ansHead->next;
    }

};