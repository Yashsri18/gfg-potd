int maximumProfit(vector<int> &prices) {
        // code here
        int mini=1e9,maxi=0,ans=0;
        for(int i = 0 ; i <prices.size();i++){
            //maxi=max(maxi,prices[i]);
             mini=min(mini,prices[i]);
            ans=max(prices[i]-mini,ans);
        }
        return ans;
    }