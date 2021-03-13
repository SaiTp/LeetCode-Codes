class Solution {
public:
    int thirdMax(vector<int>& v) {
    vector<int>::iterator ip; 
    sort(v.begin(), v.end()); 
    ip = unique(v.begin(), v.end()); 
    v.resize(distance(v.begin(), ip));
    sort(v.begin(), v.end()); 
        if(v.size()<=2)
          return v[v.size()-1]; 
        return v[v.size()-3];
    }
};