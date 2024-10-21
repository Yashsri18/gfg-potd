// User function template for C++
// day 19
class Solution {
  public:
    int countgroup(vector<int>& arr) {
        // Complete the function
        int x=0, mod =1e9+7;
        for(auto i :arr)x^=i;
        if(x!=0)return 0 ;
        int n =arr.size();
        return (1LL<<(n-1))%mod-1;
    }
};