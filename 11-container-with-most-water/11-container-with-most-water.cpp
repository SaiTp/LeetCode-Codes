class Solution {
public:
    int maxArea(vector<int>& height) {
     int p1=0,p2=height.size()-1;
        int m=0,a;
        while(p1<p2)
        {
            a=min(height[p1],height[p2])*(p2-p1);
            m=max(m,a);
            if(height[p1]<height[p2])
                p1++;
            else
            p2--;
            
        }
        return m;
    }
};