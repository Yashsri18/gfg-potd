class Solution {

  public:
    vector<int> alternateSort(vector<int>& arr) {
        // Your code goes here
        sort(arr.begin(),arr.end());
        vector<int>ans;
        int i= 0 , j = arr.size()-1;
        while(i<=j){
            if(i==j){
                ans.push_back(arr[i]);
                return ans;
            }
            ans.push_back(arr[j--]);
            ans.push_back(arr[i++]);
        }
        return ans;
    }
};