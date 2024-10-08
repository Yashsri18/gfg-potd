
class Solution {
  public:
    int pairsum(vector<int> &arr) {
        // code here
        int max1=-1e9,max2=-1e9;
        for(int i = 0 ; i < arr.size();i++){
            max1=max(max1,arr[i]);
        }
        for(int i = 0 ; i < arr.size();i++){
            if(arr[i]==max1)continue;
            max2=max(max2,arr[i]);
        }
        return max1+max2;
    }
};
