class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
       int i;
        for(i=0;i<bits.size()-1;)
        {
            if(bits[i])
                i+=2;
            else
                i++;
        }
        if(i<bits.size())
            return true;
        return false;
    }
};