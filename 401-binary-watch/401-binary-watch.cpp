class Solution {
public:
    vector<string> readBinaryWatch(int turnedOn) {
        vector<string>res;
        for(int i=0;i<12;i++)
        {
            for(int j=0;j<60;j++)
            {
                string t;
                if(__builtin_popcount(i)+__builtin_popcount(j)==turnedOn)
                {
                    if(j<10)
                        t+=to_string(i)+":0"+to_string(j);
                    else
                        t+=to_string(i)+":"+to_string(j);
                    res.push_back(t);
                }
            }
        }
        return res;
    }
};