class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        int i;
        for(i=0;i<A.size()-1;i++)
        {
            if(A[i]<=A[i+1])
            {
            continue;
            }
            else
                break;
        }
        if(i==A.size()-1)
            return true;
          for(i=0;i<A.size()-1;i++)
        {
            if(A[i]>=A[i+1])
            {
            continue;
            }
            else
                break;
        }
        if(i==A.size()-1)
            return true;
        return false;
    }
};