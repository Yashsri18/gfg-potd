//day 16
// User function template for C++
class Solution {
  public:
    int getSingle(vector<int>& arr) {
        // code here
        int ans=0;
        for(auto i :arr)ans^=i;
        return ans;
    }
};