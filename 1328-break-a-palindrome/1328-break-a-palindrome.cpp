class Solution {
public:
    string breakPalindrome(string p) {
         int n=p.size();
        for(int i=0;i<26;i++){
            char c=char('a'+i);
            for(int j=0;j<n/2;j++){
                if(p[j]!=c){
                    if(c>p[j]) p[n-1-j]=c;
                    else p[j]=c;
                    return p;
                }
            }
        }
        return "";
    }
};