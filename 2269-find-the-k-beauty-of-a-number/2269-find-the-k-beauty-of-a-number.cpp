class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string t=to_string(num);
        int n=t.size();
        int res=0;
        for(int i=0;i<n-k+1;i++)
        {
            int tp=stoi(t.substr(i,k));
            if(tp!=0 && num%tp==0)
                res++;
        }
        return res;
    }
};