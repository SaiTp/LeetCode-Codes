class Solution {
public:
    bool backspaceCompare(string S, string T) {
       stack<char> s;
        stack<char> t;
        if(S.size()==1 && T.size()==1)
            if(S[0]==T[0])
                return true;
        for(int i=0;i<S.size();i++)
        {       
                if(S[i]=='#' && !s.empty())
                    s.pop();
                else if(S[i]!='#')
                    s.push(S[i]);
        }
        for(int i=0;i<T.size();i++)
        {
            if(T[i]!='#')
                t.push(T[i]);
            else if(T[i]=='#' && !t.empty())
                t.pop();
        }
        string st,tt;
        while(!s.empty())
        {
            st+=s.top();
            s.pop();
        }
        while(!t.empty())
        {
            tt+=t.top();
            t.pop();
        }
        if(st==tt)
        return true;
        return false;
    }
};