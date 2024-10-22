

class Solution {
  public:
    int sameOccurrence(vector<int>& arr, int x, int y) {
        int cnt=0;
        map<int,int>mp;
        int ans=0;
        mp[0]=1;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==x)cnt++;
            else if(arr[i]==y)cnt--;
            if(mp.count(cnt)){
                ans+=mp[cnt];
            }

 // we have got a new array so incease the occurence
            mp[cnt]+=1;
        }
        return ans;
    }
};