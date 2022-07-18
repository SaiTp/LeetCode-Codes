class Solution {
public:
    vector<int> pivotArray(vector<int>& arr, int pivot) {
        vector<int>sm,bg;
        int f=0;
        for(auto i:arr)
            if(i>=pivot)
            {
                if(i==pivot)
                {
                    f++;
                    continue;
                }
                bg.push_back(i);
            }
            else 
                sm.push_back(i);
        while(f--)
        sm.push_back(pivot);
        for(auto i:bg)
            sm.push_back(i);
        return sm;
    }
};