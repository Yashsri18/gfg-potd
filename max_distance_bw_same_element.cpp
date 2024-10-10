class Solution {
  public:
    int maxDistance(vector<int> &arr) {
        // Code here
        int ans =-1;
        unordered_map<int,pair<int,int>>mp;
        for(int i = 0 ; i <arr.size();i++){
            if(mp.find(arr[i])==mp.end())mp[arr[i]].first=i;
            mp[arr[i]].second=i;
        }
        for(auto i : mp){
            ans=max(ans,i.second.second-i.second.first);
        }
        return ans;
    }
};