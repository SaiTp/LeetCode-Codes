class Solution {
public:
    int largestSumAfterKNegations(vector<int>& A, int K) {
        sort(A.begin(),A.end());
        int i,sum=0;
        for(i=0;K && i<A.size()-1;i++)
        {
            if(A[i]==0)
                K=0;
            else if(A[i]<0 && A[i+1]>0)
            {
                if(A[i+1]<-A[i])
                {
                    A[i+1]=-A[i+1];
                    A[i]=-A[i];
                    i++;
                }
                if(K%2==0)
                    K%=2;
                else
                {
                    A[i]=-A[i];
                    K=0;
                }
            }
            else if(A[i]<0)
            {
                A[i]=-A[i];
                K--;
            }
            else 
            {
                if(K%2==0)
                    K%=2;
                else
                {
                    A[i]=-A[i];
                    K=0;
                }
            }
        }
        for(i=0;i<A.size();i++)
        {
            sum+=A[i];
        }
        return sum;
    }
};