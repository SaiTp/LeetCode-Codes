class Solution {
public:
    int minOperations(string s) {
        int cnt_01 = 0;
        int cnt_10 = 0;
        
        for(int i=0; i < s.size(); i++){
            if(i&1){
                if(s[i]=='0')
                    cnt_01++;
                else
                    cnt_10++;
            }
            else{  
                if(s[i]=='0')
                    cnt_10++;
                else
                    cnt_01++;             
            }
        }
        
        return (cnt_10 < cnt_01)?cnt_10:cnt_01;
    }
};