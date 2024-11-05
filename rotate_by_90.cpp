// User function template for C++

/* matrix : given input matrix, you are require
 to change it in place without using extra space */
void rotate(vector<vector<int> >& arr) {
    // Your code goes here
    int n = arr.size(),m=arr[0].size();
    for(int i = 0 ; i < n-1;i++){
        for(int j = i+1;j<m;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
    for(auto &i : arr){
        int s= 0 , e = m-1;
        while(s<e){
            swap(i[s],i[e]);
            s++;e--;
        }
       // reverse(i.begin(),i.end());
    }
    
}
