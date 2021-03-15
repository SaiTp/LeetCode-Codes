class Solution {
public:
    int strStr(string haystack, string needle) {
        int h_sz = haystack.size(); 
        int n_sz = needle.size();
        int i,j;
        if (!n_sz) {
            return 0;
        }
        
        for ( i = 0; i < h_sz; i ++) {
            if (haystack[i] == needle[0]) {
                for ( j = 0; j < n_sz; j++) {
                    if (haystack[i+j] != needle[j]) 
                        break;
                }                
                if (j == n_sz) return i;
            }            
        }        
        return -1;
    }
};