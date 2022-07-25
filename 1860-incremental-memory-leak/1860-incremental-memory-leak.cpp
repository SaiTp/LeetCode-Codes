class Solution {
public:
    vector<int> memLeak(int m1, int m2) {
       vector<int> res(3,0);
        int i=1;
        while(i<=m1 || i<=m2){
            if(m1>=m2) m1-=i;
            else m2-=i;
            i++;
        }
        res[0]=i, res[1]=m1, res[2]=m2;
        return res;
    }
};