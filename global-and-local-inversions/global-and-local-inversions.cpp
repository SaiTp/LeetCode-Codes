class Solution {
public:
    bool isIdealPermutation(vector<int>& A) {
        int m=0,i;
        int n=A.size();
        for(i=0;i<n-2;i++)
        {
            m=max(m,A[i]);
            if(m>A[i+2])
                return false;
        }
        return true;
    }
};