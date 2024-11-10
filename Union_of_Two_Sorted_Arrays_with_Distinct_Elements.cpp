class Solution {
  public:
    // a,b : the arrays
    // Function to return a list containing the union of the two arrays.
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // Your code here
        // return vector with correct order of elements
        int i = 0 , j = 0 ;
        vector<int>ans;
        a.push_back(INT_MAX);
        b.push_back(INT_MAX);
      //  cout<<a.back();
        while(i<a.size() && j<b.size()){
            if(a[i]<b[j]){ans.push_back(a[i]);i++;}
            else if(a[i]>b[j]){ans.push_back(b[j]);j++;}
            else {
                ans.push_back(a[i]);
                i++;j++;
            }
        }
        ans.pop_back();
        return ans;
    }
};