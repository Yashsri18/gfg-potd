class Solution {
  public:
    int pairWithMaxSum(vector<int>& arr) {
        // code here
        int maxi = -1e9;
        int i = 0 , j = 0 ;
        while(j<arr.size()){
            if(j-i+1==2){
                maxi=max(maxi,arr[j]+arr[i]);
                i++;
            }
            j++;
        }
        return (maxi==-1e9)?-1:maxi;
    }
};