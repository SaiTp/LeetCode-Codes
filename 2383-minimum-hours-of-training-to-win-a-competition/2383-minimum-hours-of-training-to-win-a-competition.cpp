class Solution {
public:
    int minNumberOfHours(int initialEnergy, int initialExperience, vector<int>& energy, vector<int>& experience) {
    int n = energy.size();
        int req_energy = accumulate(begin(energy),end(energy),0) - initialEnergy +1;
        int req_experience = 0;
        for(int i=0;i<n;++i){
            if(initialExperience<=experience[i]){
                req_experience += experience[i] - initialExperience + 1;
                initialExperience += experience[i] - initialExperience + 1;
            }
            initialExperience += experience[i];
        }
        if(req_energy < 0)req_energy = 0;
        int res = req_energy + req_experience;
        return res;
    }
};