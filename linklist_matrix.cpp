class Solution {
  public:
    Node* constructLinkedMatrix(vector<vector<int>>& mat) {
        // code Here
        int n = mat.size();
        Node* modi[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                modi[i][j] = new Node(mat[i][j]);
            }
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i < n-1)     modi[i][j]->down = modi[i+1][j];
                if(j < n-1)     modi[i][j]->right = modi[i][j+1];
            }
        }
        
        return modi[0][0];
    }
};