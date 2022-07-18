class Solution {
public:
       int solve(string& s) {
        int ans = 0;
        for(char c : s) {
            if(c == '1') ans++;
        }
        return ans;
    }
    
    int numberOfBeams(vector<string>& bank) {
        int ans = 0, prev = 0;
        for(string& s : bank) {
            int current = solve(s);
            if(current != 0) {
                ans += current * prev;
                prev = current;            
            }
        }
        return ans;
    }
};