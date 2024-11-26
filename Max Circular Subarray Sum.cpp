int circularSubarraySum(vector<int> &arr) {
        int n=arr.size();
        int maxi=INT_MIN;
        int sum=0;
        int total=accumulate(arr.begin(),arr.end(),0);
        for(int i=0; i<n; i++){
            sum+=arr[i];
            maxi=max(maxi,sum);
            if(sum<0){
                sum=0;
            }
            arr[i]=-arr[i];
        }
        int mini=0;
        sum=0;
        for(int i=0; i<n; i++){
            sum+=arr[i];
            mini=max(mini,sum);
            if(sum<0){
                sum=0;
            }
        }
        maxi=max(maxi,total+mini);
        return maxi;
    }