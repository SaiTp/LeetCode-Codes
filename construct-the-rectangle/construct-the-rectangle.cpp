class Solution {
public:
    vector<int> constructRectangle(int area) {
      for (int i = sqrt(area); i > 0; i--)
            if (area % i == 0)
                return vector<int>{area / i, i};
        return vector<int>{area, 1};
    }
};