vector<int> findMajority(vector<int>& arr) {
        // Your code goes here.
        int n =arr.size();
        int ele1=-1,count1=0,ele2=-1,count2=0;
        for(int i = 0 ; i<arr.size();i++){
            if(arr[i]==ele1)count1++;
            else if (arr[i]==ele2)count2++;
            else if(count1==0){
                ele1=arr[i];
                count1++;
            }else if(count2==0){
                ele2=arr[i];
                count2++;
            }else {
                count1--;
                count2--;
            }
        }
        int c1=0,c2=0;
        for(int i : arr){
            if(i==ele1)c1++;
            if(i==ele2)c2++;
        }
        vector<int>ans;
        if(c1>n/3)ans.push_back(ele1);
        if(c2>n/3)ans.push_back(ele2);
        
            sort(ans.begin(),ans.end());
        if(!ans.empty()){
          return ans;
        }
        
        return {};
        
    }