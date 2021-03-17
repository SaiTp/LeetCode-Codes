class Solution {
public:
    int countLargestGroup(int n) {
        int freq[37]={0};
        int i,t,max=0,d=0,res=0;
        for(i=1;i<=n;i++)
        {
            t=i;
            d=0;
            while(t>0)
            {
                d+=t%10;
                t/=10;
            }
            freq[d]++;
        }
        for(i=0;i<33;i++)
        {
            if(freq[i]>max)
                max=freq[i];
        }
        for(i=0;i<33;i++)
        {
            if(freq[i]==max)
                res++;
        }
        return res;
    }
};