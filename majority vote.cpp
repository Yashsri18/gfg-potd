class Solution {
  public:
    // Function to find the majority elements in the array
    vector<int> findMajority(vector<int>& nums) {
        // Your code goes here.
        int n =nums.size();
        int ele1=-1,ele2=-1, count1=0,count2=0;
        for(int i = 0 ; i < nums.size() ; i++){
            if(ele1==nums[i])count1++;
            else if(ele2==nums[i])count2++;
            else if(count1==0){
                ele1=nums[i];
                count1=1;
            }
             else if(count2==0){
                ele2=nums[i];
                count2=1;
            }else{
                count1--;
                count2--;
            }
        }
        int c1=0,c2=0;
        for(int i : nums){
            if(i==ele1)c1++;
            if(i==ele2)c2++;
        }vector<int>ans;
        if(c1>n/3)ans.push_back(ele1);
        if(c2>n/3)ans.push_back(ele2);
        if(!ans.empty())
          return ans;
          
        return {-1};
    }
};