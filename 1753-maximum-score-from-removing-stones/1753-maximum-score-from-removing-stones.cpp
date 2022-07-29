class Solution {
public:
    int maximumScore(int a, int b, int c) {
         int x = max(a,max(b,c));
        int y = min(a,min(b,c));
        int z = a+b+c-x-y;
        // cout<<x<<y<<z;
        if(z+y>x){
            return (a+b+c)/2;
        }
        return min(x, y+z);
    }
};