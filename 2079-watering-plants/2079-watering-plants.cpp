class Solution {
public:
    int wateringPlants(vector<int>& plants, int cap) {
       int a=cap;
        int steps=0;
        for(int i=0;i<plants.size();i++){
            cap=cap-plants[i];
            steps++;
            if(cap<0){
                cap=a-plants[i];
                steps+=i*2;
            }
        }
        return steps;
    }
};