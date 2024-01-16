class RandomizedSet {
public:
    unordered_map<int, int> mp;
        
    vector<int> arr;
    
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
                
        if(mp.count(val))
            return false;
        
        arr.push_back(val);
        
        mp[val] = arr.size() - 1;
        
        return true;
    }
    
    bool remove(int val) {
        
        if(mp.count(val))
        {            
            int idx = mp[val];
                        
            int last_val = arr.back();
                        
            arr[idx] = last_val;
                        
            arr.pop_back();
                       
            mp[last_val] = idx;
                        
            mp.erase(val);
            
            return true;
        }
        
        return false;
    }
    
    int getRandom() {
                
        int rand_idx = rand() % arr.size();
        
        return arr[rand_idx];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */