class Solution {
  public:
    // Function to return the minimum cost of connecting the ropes.
    int minCost(vector<int>& arr) {
        // min heap we have to take 1st two smmaler elemnt
        priority_queue<int,vector<int>,greater<int>> pq;
        //push all elemnt
        int n=arr.size();
        for(int i=0;i<n;i++){
            pq.push(arr[i]);
        }
        int cost=0;
        while(pq.size()>1){
            int a=pq.top();
            pq.pop();
            
            int b=pq.top();
            pq.pop();
            
            int sum=a+b;
            cost+=sum;
            
            pq.push(sum);
        }
        return cost;
    }
};
