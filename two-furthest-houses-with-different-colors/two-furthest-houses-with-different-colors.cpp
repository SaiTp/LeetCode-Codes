class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int start = 0, end = colors.size()-1;
        int i = 0, j = colors.size()-1;
        while(i < j){
            if(colors[i] != colors[j]) return end-start;
            if(colors[j-1] != colors[i]) return j-1-start;
            if(colors[i+1] != colors[j]) return end-i-1;           
            i++;
            j--;
        }
        return end-start;
    }
};