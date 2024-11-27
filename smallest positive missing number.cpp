int missingNumber(vector<int> &arr) {
        // Your code here
        int pos=0 ;
        for(int i = 0 ;i<arr.size();i++){
            pos=max(pos,arr[i]);
        }
        vector<int> check(pos+2,0);
        for(int i = 0 ; i < arr.size();i++){
            if(arr[i]>0)check[arr[i]]+=1;
        }
        for(int i = 1 ; i <check.size();i++){
            if(check[i]==0)return i ;
        }
        return pos+1;
    }