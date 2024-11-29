string addBinary(string& s1, string& s2) {
        // your code here
        string ans ="";
        int i = s1.size()-1,j=s2.size()-1,carry=0;
        while(i>=0 && j>=0){
            int sum = carry+s1[i]-'0'+s2[j]-'0';
            ans.push_back(sum%2+'0');
            carry=sum/2;
            i--;j--;
        }
        //cout<<ans;
        while(i>=0){
           int sum = carry+s1[i]-'0';
            ans.push_back(sum%2+'0');
            carry=sum/2; 
            i--;
        }
        while(j>=0){
            int sum = carry+s2[j]-'0';
            ans.push_back(sum%2+'0');
            carry=sum/2;
            j--;
        }
        if(carry){
             ans.push_back(carry+'0');
        }
        reverse(ans.begin(),ans.end());
        i = 0 ;
        while(ans[i]=='0')i++;
        return ans.substr(i);
    }