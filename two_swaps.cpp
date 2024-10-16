// day14
class Solution {
  public:
    bool checkSorted(vector<int> &arr) {
        // code here.
        int count = 0 ,i=0;
        while(i<arr.size()){
            if(arr[i]==i+1)i++;
            else {
                count++;
                swap(arr[i],arr[arr[i]-1]);
      
            }
        }
        return count<=2;
    }
};