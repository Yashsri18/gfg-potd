#define ll long long 
    int maxProduct(vector<int> &arr) {
        // Your Code Here
        int n =arr.size();
          ll pre=1,suf=1,ans=LLONG_MIN;
	    for(int i=0;i<n;i++){
	        if(pre==0)pre=1;
	        if(suf==0)suf=1;
	        pre=arr[i]*pre;
	        suf=arr[n-1-i]*suf;
	        ans=max({ans,pre,suf});
	    }
	    return ans;
    }