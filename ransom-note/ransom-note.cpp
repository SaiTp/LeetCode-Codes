class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int i,j,f,x1,x2;
        x1=ransomNote.size();
        x2=magazine.size();
        if(x1>x2)
            return false;
        for(i=0;i<x1;i++)
        {
            f=0;
            for(j=0;j<x2;j++)
            {
                if(magazine[j]=='$')
                    continue;
                if(ransomNote[i]==magazine[j])
                {
                    magazine[j]='$';
                    f=1;
                    break;
                }
            }
            if(!f)
                return false;
        }
        return true;
    }
};