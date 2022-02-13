class Solution {
public:
    string decodeString(string s) {
    stack<int> st;
	for(int i=0;i<s.length();i++){
		if(s[i]=='[') st.push(i);
		else if(s[i]==']'){
			//Finding the string enclosed in paranthesis[ ] 
			string str=s.substr(st.top()+1,i-st.top()-1);
			
			//finding the value how many times the string nneds to be repeated i.e., val[str]
			int j=st.top()-1;
			while(j>=0 and isdigit(s[j])) j--;
			int val=stoi(s.substr(j+1,st.top()-j-1));
			
			//creating a temp string which holds val[str]
			string temp;
			for(int k=0;k<val;k++) temp+=str;
			
			//Corner case (if the length of string shrinks i.e., cases like "2[a]" ==== > "aa"
			//here length shrinks from 3 to 2 so to maintain consistency we place empty spaces at the end of the string 
			if(temp.length()<i-j+1) temp+=string(i-j+1-temp.length(),' ');
			
			//Now we modify the string i.e., 3[a2[c]]===> 3[acc ] (single space to maintain the consistency)
			s=s.substr(0,j+1)+temp+s.substr(i+1);
			st.pop();
		}
	}
	
	//remove all the spcaes
	string res;
	for(int i=0;i<s.length();i++){
		if(s[i]!=' ') res+=s[i];
	}
	return res;
    }
};