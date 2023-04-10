class Solution {
public:
    bool isValid(string s) {
     stack<char> res;
        for(auto i=0;i<s.length();i++)
        {      
            if(s[i]=='('||s[i]=='['||s[i]=='{')
            {
                res.push(s[i]);
            }
            
            if(res.empty())
            {
                if(s[i]==')'||s[i]==']'||s[i]=='}')
                    return false;
            }
            
            if(s[i]==')'||s[i]==']'||s[i]=='}')
            {
                switch(s[i])
                {
                    case ')':
                        if(res.top()=='(')
                            res.pop();
                        else
                            return false;
                        break;
                        
                    case ']':
                        if(res.top()=='[')
                            res.pop();
                        else
                            return false;
                        break;
                        
                    case '}':
                        if(res.top()=='{')
                            res.pop();
                        else
                            return false;
                        break;
                }
            }
                
        }
        if(res.empty())
            return true;
        else
            return false;   
    }
};