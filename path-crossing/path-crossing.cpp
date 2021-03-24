class Solution {
public:
    bool isPathCrossing(string path) {
         unordered_set<string> us;
        us.insert("0.0");
        const string point {"."};
        int x=0, y=0;
        for(auto i:path) {
            switch(i) {
                case'N': ++y; break;
                case'S': --y; break;
                case'E': --x; break;
                case'W': ++x; break;
            }
            string s {to_string(x)+point+to_string(y)};
            if(us.count(s)) return true;
            us.insert(s);
        }
        return false;
    }
};