class Solution {
  public:
    vector<int> removeDuplicate(vector<int>& arr) {
        // code here
        unordered_map<int,int>mp;
        for(int i = 0 ; i <arr.size();i++){
            mp[arr[i]]++;
        }
        for(int i= 0 ; i < arr.size();i++){
            if(mp.find(arr[i])==mp.end()){
                arr.erase(arr.begin()+i);
                i--;
            }else{
                mp.erase(arr[i]);
            }
        }
        return arr;
    }
};