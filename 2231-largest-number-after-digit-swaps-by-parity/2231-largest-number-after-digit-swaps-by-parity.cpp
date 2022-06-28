class Solution {
public:
    int largestInteger(int num) {
        string t=to_string(num);
        string e,o,res;
        for(int i=0;i<t.size();i++)
        {
            if((t[i]-'0')%2)
                o+=t[i];
            else
                e+=t[i];
        }
        sort(o.begin(),o.end(),greater<int>());
        sort(e.begin(),e.end(),greater<int>());
        int i=0,j=0,k=0;
        //cout<<e<<" "<<o;
        int n1=o.size(),n2=e.size();
        while(i<n1 && j<n2)
        {
            
            if((t[k]-'0')%2)
            {
                res+=o[i++];
            }
            else
            {
                res+=e[j++];
            }
            k++;
        }
        while(i<n1)
        {
            res+=o[i++];
        }
        while(j<n2)
        {
            res+=e[j++];
        }
        return stoi(res);
    }
};