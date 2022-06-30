// { Driver Code Starts
// C++ implementation to convert a
// sentence into its equivalent
// mobile numeric keypad sequence
#include <bits/stdc++.h>
using namespace std;
string printSequence(string input);
// Driver function
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
    {
        string s;
        getline(cin,s);
        cout<<printSequence(s)<<endl;
    }
	return 0;
}
// } Driver Code Ends


string printSequence(string S)
{
    //code here.
     unordered_map <char,string> mapping;
   mapping['A']="2";
   mapping['B']="22";
   mapping['C']="222";
   mapping['D']="3";
   mapping['E']="33";
   mapping['F']="333";
   mapping['G']="4";
   mapping['H']="44";
   mapping['I']="444";
   mapping['J']="5";
   mapping['K']="55";
   mapping['L']="555";
   mapping['M']="6";
   mapping['N']="66";
   mapping['O']="666";
   mapping['P']="7";
   mapping['Q']="77";
   mapping['R']="777";
   mapping['S']="7777";
   mapping['T']="8";
   mapping['U']="88";
   mapping['V']="888";
   mapping['W']="9";
   mapping['X']="99";
   mapping['Y']="999";
   mapping['Z']="9999";
   mapping[' ']="0";
   
   string ans;
   
   for(int i=0;i<S.length();i++)
   {
       ans=ans+mapping[S[i]];
   }
   return ans;
}