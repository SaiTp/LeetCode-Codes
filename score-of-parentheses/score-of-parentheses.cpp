class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int>st;
        st.push(0);
        for(char c:s)
        {
            if(c=='(')
                st.push(0);
            else
            {
                int t1=st.top();
                st.pop();
                int t2=st.top();
                st.pop();
                st.push(t2+max(2*t1,1));
            }
        }
        return st.top();
    }
};