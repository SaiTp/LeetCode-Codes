class Solution {
public:
    int numPrimeArrangements(int n) {
        vector<int>prime = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
    long answer = 1, modulo = 1000000007, p = 0;
    
    for(auto &i : prime) 
      if(i <= n) p++;
      else break;
    
    n -= p;
    
    for(long i = 1; i <= n; i++) answer = (answer * i) % modulo;
    for(long i = 1; i <= p; i++) answer = (answer * i) % modulo ;
    
    return answer;
    }
};