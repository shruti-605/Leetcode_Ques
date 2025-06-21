class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
      int s=0;
      int e=0;
      int sum=0;
      int n=arr.size();
      vector<int> ans;
      for(int i=0;i<n;i++){
          sum+=arr[i];//sum off all array
        //   if(sum<target)
        if(sum>=target){//if  greater
            e=i;//here i and e on then goes to end
            while(sum>target){
                sum-=arr[s]; // we have to minus bcz target is target
                s++;
            }
            if(sum==target){
                ans.push_back(s+1);//adding 1 bcx 1 based index
                ans.push_back(e+1);
                return ans;
            }
        }
      }
      return {-1};
      //there is noo subarray sum
    }
};
