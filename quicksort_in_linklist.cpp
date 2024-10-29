
/* a node of the singly linked list
struct node
{
    int data;
    struct node *next;

    node(int x){
        data = x;
        next = NULL;
    }
}; */

// Solution class with quickSort function#
#include<bits/stdc++.h>
class Solution {
  public:
    struct Node* quickSort(struct Node* head) {
        // code here
        vector<int>arr;
        Node* curr=head;
        while(curr){
            arr.push_back(curr->data);
            curr=curr->next;
        }
        sort(arr.begin(),arr.end());
        curr=head;
        int i =0 ;
        while(curr){
            curr->data=arr[i];
            i++;
            curr=curr->next;
        }
        return head;
    }
};