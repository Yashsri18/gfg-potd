// User function template for C++
class Solution {
  public:
    /* Returns count of pairs with difference k  */
    int countPairsWithDiffK(vector<int>& arr, int k) {
        // code here
        int ans=0;
        unordered_map<int,int>mp;
        for(auto i : arr)mp[i]++;
        for(int i = 0 ; i < arr.size();i++){
            int t = k+arr[i];
            if(mp.find(t)!=mp.end()){
                ans+=mp[t];
                if(t==arr[i])ans--;
            }
        }
        return ans;
    }
};