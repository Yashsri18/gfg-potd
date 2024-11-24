int maxSubarraySum(vector<int> &arr) {
        // code here...
        int sum = arr[0],maxi=arr[0];
        int n =arr.size();
        for(int i =1 ; i < n ; i ++){
            if(sum<0)sum=0;
            sum+=arr[i];
            maxi=max(maxi,sum);
        }
        return maxi;
    }