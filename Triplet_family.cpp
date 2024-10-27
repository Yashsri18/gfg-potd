class Solution {
  public:
    bool findTriplet(vector<int>& arr) {
        // Your code
        sort(arr.begin(),arr.end());
        for(int i = 0 ; i < arr.size();i++){
            for(int j = i+1;j<arr.size();j++){
                if(*lower_bound(arr.begin()+1+i,arr.begin()+j-1,arr[j]-arr[i])==arr[j]-arr[i])return 1 ;
            }
        }
        return 0 ;
    }
};