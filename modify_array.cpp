// User function Template for C++
/// day 22
class Solution {
  public:
    vector<int> modifyAndRearrangeArray(vector<int> &arr) {
        // Complete the function
        int count = 0 ;
        for(int i = 0 ; i < arr.size()-1;i++){
            if(arr[i]==0)count++;
            if(arr[i]!=0 && arr[i]==arr[i+1]){
                arr[i]*=2;
                arr[i+1]=0;
            }
        }
        vector<int>ans(arr.size(),0);
        int i = 0 , j = 0 ;
        while(i<arr.size()&& j<ans.size()){
            if(arr[i]!=0){
                ans[j]=arr[i];
                j++;i++;
            }else i++;
            
        }
        return ans;
    }
};
