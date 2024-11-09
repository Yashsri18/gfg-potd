// User function template for C++

class Solution {
  public:
  string solve(string &a, string &b){
      int carry= 0 ;
      string ans= "";
      int i = a.size()-1,j=b.size()-1;
      while(i>=0 && j>=0){
          int last= a[i]-'0'+b[j]-'0'+carry;
          carry = last/10;
          last = last%10;
          ans.push_back(last+'0');
          i--;j--;
      }
      if(i>=0){
          int last= a[i]-'0'+carry;
          carry = last/10;
          last = last%10;
          ans.push_back(last+'0');
          i--;
      }
      if(j>=0){
          int last= b[j]-'0'+carry;
          carry = last/10;
          last = last%10;
          ans.push_back(last+'0');
          j--;
      }
      if(carry)ans.push_back(carry+'0');
      reverse(ans.begin(),ans.end());
      return ans;
  }
    string minSum(vector<int> &arr) {
        // code here
        sort(arr.begin(),arr.end());
        string a ="",b="";
        
        for(int i = 0 ; i <arr.size();i++){
            if(i&1)b+=(arr[i]+'0');
            else a+=(arr[i]+'0');
        }
        //cout<<a<<" "<<b<<endl;
        //return "";
        string ans = solve(a,b);
        int i = 0;
        while(ans[i]=='0'){
            i++;
        }
        return ans.substr(i);
    }
};