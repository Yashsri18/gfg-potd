// User function Template for C++

class Solution {
  public:
    int minIncrements(vector<int> arr) {
        // Code here
        sort(arr.begin(),arr.end());
        int ans =0;
        set<int> st;
        
        for(int a : arr) {
            auto pos = st.find(a);
            if(st.find(a)!=st.end()) {
                int val = *st.rbegin()+1;
                ans+=(val-a);
                a=val;
            }
            st.insert(a);
        }
        return ans;
    }
};