class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        int i,n=A.size();
        vector <int> out;
        for(i=0;i<n;i++)
            if(A[i]%2==0)
                out.push_back(A[i]);
          for(i=0;i<n;i++)
            if(A[i]%2)
                out.push_back(A[i]);
        return out;
            
    }
};