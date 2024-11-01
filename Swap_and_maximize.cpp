class Solution {
  public:
    long long maxSum(vector<int>& arr) {
        // code here
        int max = 0;
        int n = arr.size();
        sort(arr.begin(), arr.end());
        for (int i = 0; i < n; i++){
            max += abs(arr[i] - arr[n-i-1]);
        }
        return max;
    }
};
