class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int count = 0;
        int i = 0;
        int x = capacity;
        while(i < plants.size()) {
            if(capacity >= plants[i]) {
                count++;
                capacity -= plants[i];
                i++;
            } else {
                count += 2*i;
                if(capacity == 0)
                    capacity = x;
                else
                    capacity += (x - capacity);
            }
        }
        return count;
    }
};