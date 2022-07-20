class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        if(n==0)
            ans.push_back("");
        else
        {
            for(int c=0;c<n;c++)
            {
                for(string l:generateParenthesis(c))
                    for(string r:generateParenthesis(n-1-c))
                        ans.push_back("(" + l + ")" + r);
            }
        }
        return ans;
    }
};