class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        vector<int> years(101, 0);
        
        for(auto &log: logs) {
            years[log[0] - 1950]++;
            years[log[1] - 1950]--;
        }
        
        int maxPopulation = years[0];
        int year = 1950;
        
        for(int i = 1; i <= 100; i++) {
            years[i] += years[i - 1];
            
            if(years[i] > maxPopulation) {
                maxPopulation = years[i];
                year = i + 1950;
            }
        }
        
        return year;
    }
};