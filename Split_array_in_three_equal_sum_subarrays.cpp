// User function Template for C++
//  Class Solution to contain the method for solving the problem.
class Solution {
  public:
    // Function to determine if array arr can be split into three equal sum sets.
    vector<int> findSplit(vector<int>& arr) {
        // code here
      //  int n = arr.size();
           int sum = 0;
        for(auto i: arr){
            sum+=i;
        }
        if(sum%3!=0){
            return {-1,-1};
        }
        vector<int>ans(2);
        int part = sum/3;
        int n = arr.size();
        int i=0;
        sum=0;
        int cnt = 0;
        while(i<n){
            sum+=arr[i];
            if(sum==part && cnt<2){
                ans.push_back(i);
                cnt++;
                sum = 0;
            }
            i++;
        }
        if(sum!=part||cnt!=2){
            return {-1,-1};
        }
        return ans;
    }
};