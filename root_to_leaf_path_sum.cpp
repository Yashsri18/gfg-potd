/* Tree node structure  used in the program
 struct Node
 {
     int data;
     Node* left, *right;
}; */

class Solution {
  public:
  int sum = 0 ;
  void solve(Node* root , int curr){
      if(root->left==NULL && root->right==NULL){
          curr=curr*10+root->data;
          sum+=curr;
      }
       curr=curr*10+root->data;
       if(root->left)solve(root->left,curr);
       if(root->right)solve(root->right,curr);
  }
    int treePathsSum(Node *root) {
        // code here.
        solve(root,0);
        return sum;
    }
};
