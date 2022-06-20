class Solution {
public:
    int minimumLengthEncoding(vector<string>& words) {
        int n=words.size();
        if(n==1)
            return words[0].size()+1;
       for(auto& w:words) 
           reverse(w.begin(),w.end());
        sort(words.begin(), words.end(), greater<string>());
        int cnt=0;
        for(int i=0; i<words.size(); i++) {
            if(i && words[i-1].find(words[i]) == 0) continue;
            cnt+=words[i].size()+1;
        }
        return cnt;
    }
};