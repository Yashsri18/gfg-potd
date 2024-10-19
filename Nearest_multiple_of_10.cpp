
clas// day 17
Solution {
  public:
    string roundToNearest(string s) {
        // Complete the function
        int  n =s.size();
       // cout<<s[n-1]-'0';
        if(s[n-1]<='5'){
            s[n-1]='0';
            return s;
        }else{
            s[n-1]='0';
            int i = n-2, carry= 1;
            while(carry!=0 && i>=0){
                int x = s[i]-'0';
                x+=carry;
                carry=x/10;
                x=x%10;
                s[i]=x+'0';
               // cout<<x+'0'<<endl;
               i--; 
            }
        //     cout<<carry<<endl;
        //   cout<<s<<endl;
            if(carry)s.insert(s.begin(),carry+'0');
            
        }
        return s;
    }
};