//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to find the number of islands.
    int dx[8]={0, -1, -1, -1, 0, 1, 1, 1};
    int dy[8]={-1, -1, 0, 1, 1, 1, 0, -1};
    int n , m;
    void dfs(int i , int j ,vector<vector<char>>&grid,vector<vector<int>>&vis){
        vis[i][j]=1;
        for(int k=0;k<8;k++){
            int x=i+dx[k];
            int y=j+dy[k];
            if(x>=0 && y>=0 && x<n && y<m && grid[x][y]=='1'&& !vis[x][y]){
                dfs(x,y,grid,vis);
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        // Code here
        n = grid.size();
        m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        int ans = 0 ;
        for(int i = 0 ; i < n ;i++){
            for(int j = 0 ; j < m ; j ++){
                if(!vis[i][j] && grid[i][j]=='1'){
                    ans++;
                    dfs(i,j,grid,vis);
                }
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}
// } Driver Code Ends