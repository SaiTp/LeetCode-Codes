class Solution {
public:
    string capitalizeTitle(string s) {
         int i=0;
        for(int j=0;j<s.size();j++){
            if(s[j]==' '){
                i=j+1;               
            }
            else{
                s[j]=tolower(s[j]);
                if(j-i+1>2){
                    s[i]=toupper(s[i]);
                }
            }
        }
        return s;
    }
};