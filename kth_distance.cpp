// User function template for C++

class Solution {
  public:

    bool checkDuplicatesWithinK(vector<int>& arr, int k) {
        int i = 0 ,j = 0 ;
        unordered_map<int,int>mp;
        while(j<arr.size()){
            mp[arr[j]]++;
            if(j-i+1==k+1){
                for(auto i:mp){
                    if(i.second>1)return 1;
                }
                mp[arr[i]]--;
                if(mp[arr[i]]==0)mp.erase(arr[i]);
                i++;
            }
            j++;
        }
       return 0 ;
    }
};