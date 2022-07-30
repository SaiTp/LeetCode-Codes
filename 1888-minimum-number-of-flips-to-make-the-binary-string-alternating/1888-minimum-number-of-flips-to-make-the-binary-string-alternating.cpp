class Solution {
public:
    int minFlips(string s) {
         int odd1 = 0, odd0 = 0, even1 = 0, even0 = 0, answer, n = s.size();
    
    for(int i = 0; i < n; i += 2)
      s[i] == '1' ? even1++ : even0++;   //count 1 and 0 in even places    
    
    for(int i = 1; i < n; i += 2)        //count 1 and 0 in odd places 
      s[i] == '1' ? odd1++ : odd0++;
    
    answer = min(even1 + odd0 ,even0 + odd1);     //if n is even
    
    if(n-- % 2 == 1){                             //if n is odd
      for(int i = 0; i != n; i++){
        swap(even1,odd1), swap(even0,odd0);
        if(s[i] == '0') odd0--, even0++;
        else odd1--, even1++;
        answer = min(answer, min(even0 + odd1 ,even1 + odd0));
      }
    }
    return answer; 
    }
};