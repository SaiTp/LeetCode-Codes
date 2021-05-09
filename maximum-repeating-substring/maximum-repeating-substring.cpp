class Solution {
public:
    int maxRepeating(string sequence, string word) {
         string cur=word;
        int ans=0;
        while(1){
            if(sequence.find(cur)!=-1){
                ans++;
                cur+=word;
            }
            else
                break;
        }
        return ans;
    }
};