class Solution {
public:
    vector<string> uncommonFromSentences(string A, string B) {
       string c,t;
        vector <string> temp,res;
        c+=A;
        c+=" ";
        c+=B;
        int i,j,f;
        for(i=0;i<c.size();i++)
        {
            if(c[i]==' ')
            {
                temp.push_back(t);
                t="";
            }
            else
                t+=c[i];
        }
        temp.push_back(t);
        sort(temp.begin(),temp.end());
        for(i=0;i<temp.size();i++)
        {
            f=1;
           if(temp[i]=="")
               continue;
            for(j=0;j<temp.size();j++)
            {
                if(i==j)
                    continue;
                if(temp[i]==temp[j])
                {
                    temp[j]="";
                    f=0;
                }
            }
            if(!f)
                temp[i]="";
        }
        for(i=0;i<temp.size();i++)
        if(temp[i]!="")
        res.push_back(temp[i]);
        return res;
    }
};