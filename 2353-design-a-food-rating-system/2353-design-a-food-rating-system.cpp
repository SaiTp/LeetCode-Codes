class FoodRatings {
public:
   map<string, int> f1;
    map<string, string> f2;
    map<string, set<pair<int, string>>> f3;
    FoodRatings(vector<string>& a, vector<string>& b, vector<int>& c) {
        int n = a.size();
        for(int i = 0; i < n; i++) {
            f1[a[i]] = c[i], f2[a[i]] = b[i];
            f3[b[i]].insert({-c[i], a[i]});
        }
    }
    
    void changeRating(string food, int newRating) {
        int old = f1[food];
        f3[f2[food]].erase({-old, food});
        f1[food] = newRating;
        f3[f2[food]].insert({-newRating, food});
        
    }
    
    string highestRated(string cuisine) {
        auto it = f3[cuisine].begin();
        return it -> second;
    }
};

/**
 * Your FoodRatings object will be instantiated and called as such:
 * FoodRatings* obj = new FoodRatings(foods, cuisines, ratings);
 * obj->changeRating(food,newRating);
 * string param_2 = obj->highestRated(cuisine);
 */