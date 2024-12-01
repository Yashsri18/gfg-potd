 char nonRepeatingChar(string &s) {
        // Your code here
         int arr[256]={0};
        for(char c:s) {
             arr[c]++;
        }
        char ans;
        for(char c:s) {
            if(arr[c]==1) {
                return c;
            }
        }
        return '$';
    }