bool canAttend(vector<vector<int>> &arr) {
        // Your Code Here
        sort(arr.begin(),arr.end());int prevst=0,prevend=0,count=0;
        for(auto i :arr){
            if(i[0]>=prevend){
                count++;
                prevend=max(i[1],prevend);
            }
        }
        return count==arr.size();
    }