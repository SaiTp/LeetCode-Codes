// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    string previousNumber(string S){
        // code here 
       if(S.length()<=1)
return "-1";
stack<int>st;
st.push(S.length()-1);
for(int i=S.length()-2;i>=0;i--)
{
if(S[i] >S[i+1])
{
if(i==0 && S[i+1]=='0')
continue;
else{
if(st.empty())
{
swap(S[i] , S[i+1]);
return S;
}
else{
int n = i+1;
while(!st.empty() && S[st.top()]< S[i])
{
if(S[n]!=S[st.top()])
n = st.top();
st.pop();
}
swap(S[i] , S[n]);
return S;
}
}
}
else
st.push(i);
}




return "-1";
    }
};


// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.previousNumber(S) << endl;
    }
    return 0; 
}   // } Driver Code Ends