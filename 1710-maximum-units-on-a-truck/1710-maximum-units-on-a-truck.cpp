class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int i,j,n,res=0,t;
        n=boxTypes.size();
        for(i=0;i<n-1;i++)
        {
            for(j=0;j<n-i-1;j++)
            {
               if(boxTypes[j+1][1]>boxTypes[j][1])
                {
                   t=boxTypes[j+1][1];
                   boxTypes[j+1][1]=boxTypes[j][1];
                   boxTypes[j][1]=t;
                   t=boxTypes[j+1][0];
                   boxTypes[j+1][0]=boxTypes[j][0];
                   boxTypes[j][0]=t;
                }
            }
        }
        for(i=0;i<n;i++)
        {
           if(boxTypes[i][0]<=truckSize)
            {
                truckSize-=boxTypes[i][0];
                res+=boxTypes[i][0]*boxTypes[i][1];
            }
            else if(truckSize>0)
            {
                res+=truckSize*boxTypes[i][1];
                truckSize=0;
            }
            else if(truckSize==0)
                break;
        }
        return res;
    }
};