int dp[10001][2];
  int solve(int i , int cb,vector<int>&arr){
      if(i>=arr.size())return 0 ;
      if(dp[i][cb]!=-1)return dp[i][cb];
      if(cb){
          return dp[i][cb]=max(-arr[i]+solve(i+1,0,arr),solve(i+1,1,arr));
      }else{
          return dp[i][cb]=max(arr[i]+solve(i+1,1,arr),solve(i+1,0,arr));
      }
      
  }
    int maximumProfit(vector<int> &prices) {
        // code here
        memset(dp,-1,sizeof dp);
        return solve(0,1,prices);
    }