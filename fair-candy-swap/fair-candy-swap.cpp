class Solution {
public:
    vector<int> fairCandySwap(vector<int>& A, vector<int>& B) {
        /*int i,j,suma=0,sumb=0,ta,tb,f;
        vector<int> ans;
        for(i=0;i<A.size();i++)
            suma+=A[i];
        for(i=0;i<B.size();i++)
            sumb+=B[i];
        for(i=0;i<A.size();i++)
        {
            f=0;
            ta=suma;
            tb=sumb;
            ta-=A[i];
            tb+=A[i];
            for(j=0;j<B.size();j++)
            {
                tb-=B[j];
                ta+=B[j];
                if(ta==tb)
                {
                    ans.push_back(A[i]);
                    ans.push_back(B[j]);
                    f=1;
                    break;
                }
                else
                {
                    tb+=B[j];
                    ta-=B[j];
                }
            }
            if(f)
                break;
        }
        return ans;*/
        int sumA = accumulate(A.begin(),A.end(),0), sumB = accumulate(B.begin(), B.end(),0);
	int tmp = (sumB-sumA)/2;
	set<int> stA(A.begin(),A.end()),stB(B.begin(),B.end());
	for(auto &x:stA)
	  if(stB.find(x+tmp)!=stB.end()) return {x,x+tmp};
	return {0,0};
    }
};