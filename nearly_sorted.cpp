void nearlySorted(vector<int>& arr, int k) {
        int n = arr.size();
        priority_queue<int, vector<int>, greater<int>> pq;
        for(int i = 0; i < k; i++){
            pq.push(arr[i]);
        }
        int i = 0;
        for(i; i < arr.size()-k; i++){
            pq.push(arr[i+k]);
            arr[i] = pq.top();
            pq.pop();
        }
        while(i < arr.size()){
            arr[i] = pq.top();
            pq.pop();
            i++;
        }
    }