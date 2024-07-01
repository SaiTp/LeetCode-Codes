class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int i,c=0,f=0;
        for(i=0;i<arr.size();i++)
        {
            
            if(arr[i]%2)
                c++;
            else
                c=0;
            if(c==3)
            {
                f=1;
                break;
            }
        }
        if(f)
            return true;
        else
            return false;
    }
};