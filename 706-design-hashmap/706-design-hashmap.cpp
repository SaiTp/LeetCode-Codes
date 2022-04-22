class MyHashMap {
public:
    vector<int>hm;
    MyHashMap() {
        vector<int>t(1000001,-1);
        hm=t;
    }
    
    void put(int key, int value) {
        hm[key]=value;
    }
    
    int get(int key) {
        return hm[key];
    }
    
    void remove(int key) {
        hm[key]=-1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */