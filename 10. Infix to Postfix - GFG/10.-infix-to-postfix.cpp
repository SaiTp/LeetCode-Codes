// { Driver Code Starts
// C++ implementation to convert infix expression to postfix
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to convert an infix expression to a postfix expression.
     int pr(char s){
       if(s=='(') return 0;
       else if(s=='+' || s=='-') return 1;
       else if(s=='*' || s=='/' || s=='%') return 2;
       else if(s=='^') return 3;
       return 0;
    }
   string infixToPostfix(string s)
   {
   int a=s.length();
   string sa="";
   stack <char> st;
   for(int i=0;i<a;i++){
       if(s[i]>='a'&&s[i]<='z'){
           sa+=s[i];
       }
       else if(s[i]=='('){
           st.push('(');
       }
       else if(s[i]==')'){
           while(st.top()!='('){
               sa+=st.top();
               st.pop();
           }
           st.pop();
       }
       else{
           while(!st.empty()&&pr(st.top())>=pr(s[i]) &&s[i]!='^'){
               sa+=st.top();
               st.pop();
           }
           st.push(s[i]);
       }
   }
   while(!st.empty()){
       sa+=st.top();
       st.pop();
   }
   return sa;
   }
};


// { Driver Code Starts.
//Driver program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--)
    {
        string exp;
        cin>>exp;
        Solution ob;
        cout<<ob.infixToPostfix(exp)<<endl;
    }
    return 0;
}
  // } Driver Code Ends