class Solution {
public:
    void nextPermutation(vector<int>& A) {
        int pivot=-1, n=A.size();
        //finding pivot element 123654 pivot =3
        for(int i=n-2;i>=0;i--){
            if(A[i]<A[i+1]){
                pivot=i;
                break;
            }
        }
        //finding if pivot element is not found convert decreasing to increasing order 
            if(pivot==-1){
                reverse(A.begin(),A.end());
                return;
            }
            //find rightmost element >pivot  next largest element 123654 pivot rightmost=4 greater
            for(int i=n-1;i>pivot;i--){
                if(A[i]>A[pivot]){
                    swap(A[i],A[pivot]);
                    break;
                }
            }
            //then last part remaining 124653 arrange them 124356 
            int i=pivot+1;
            int j=n-1;
            while(i<=j){
                swap(A[i],A[j]);
                i++; j--;
            }
    }
};
