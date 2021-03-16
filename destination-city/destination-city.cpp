class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        int f,i;
        string d;
        d=paths[0][1];
        while(1)
        {
            f=1;
            for(i=0;i<paths.size();i++)
            {
                if(d==paths[i][0])
                {
                    d=paths[i][1];
                    f=0;
                }
            }
            if(f)
                break;
        }
        return d;
    }
};