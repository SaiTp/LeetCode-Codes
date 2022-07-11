class Solution {
public:
    bool canChange(string start, string target) {
        int sl=0,sr=0,tl=0,tr=0;
        vector<int>sli,sri,tli,tri;
        int n=start.size();
        string t1,t2;
       
        for(int i=0;i<start.size();i++)
        {
            if(start[i]=='L')
            {
                sli.push_back(i);
                t1+="L";
            }
            else if(start[i]=='R')
            {
                sri.push_back(i);
                t1+="R";
            }
        }
        for(int i=0;i<start.size();i++)
        {
            if(target[i]=='L')
            {
                
                tli.push_back(i);
                t2+="L";
                
            }
            else if(target[i]=='R')
            {
                
                tri.push_back(i);
                t2+="R";
            }
        }
       if(t1!=t2)
           return false;
         for(int i=0;i<sli.size();i++)
        {
            if(tli[i]>sli[i])
                return false;
            
        }
        for(int i=0;i<tri.size();i++)
        {
            if(tri[i]<sri[i])
                return false;
           
        }
            
    return true;
    }
};