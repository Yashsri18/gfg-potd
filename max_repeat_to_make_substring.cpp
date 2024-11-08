// User function Template for C++

class Solution {
  public:
  int minRepeats(string& s1, string& s2) {
        string temp = s1;
        int count = 1;
        
        if(s1 == s2) return count;
        
        while(temp.size() < s2.size()){
            temp += s1;
            
            count += 1;
            
            if(temp.find(s2) != string::npos) return count;
        }
        
        temp += s1;
        count += 1;
        
        if(temp.find(s2) != string::npos){
            return count;
        }
        
        return -1;
    }
};