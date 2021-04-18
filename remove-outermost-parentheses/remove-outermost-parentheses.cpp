class Solution {
public:
    string removeOuterParentheses(string S) {
       string answer;
   
    for(int i = 0; i<S.size();i++){
      int count = 1, idx = i;
      while(count)
        if( S[++i] == '(' ) count++;
        else count--;
        
      answer += S.substr(idx + 1,i - idx -1);
    }
     
    return answer;
    }
};