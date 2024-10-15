class Solution {
  public:
    // Function to count the number of subarrays which adds to the given sum.
    int subArraySum(vector<int>& arr, int tar) {
        // Your code here
        int n = arr.size();
        int presum=0;
        unordered_map<int,int>mp;
        mp[0]=1;
        int ans =0 ;
        for(int i = 0 ; i <n;i++){
            presum+=arr[i];
            if(mp.find(presum-tar)!=mp.end())ans+=mp[presum-tar];
            mp[presum]++;
        }
        return ans;
    }
};