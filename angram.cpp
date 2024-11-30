bool areAnagrams(string& s1, string& s2) {
        int n = s1.length();
        int m = s2.length();
        if(n!=m)
        return false;
        
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        
        for(int i=0;i<n;i++){
            if(s1[i]!=s2[i])
            return false;
        }
        return true;
    }