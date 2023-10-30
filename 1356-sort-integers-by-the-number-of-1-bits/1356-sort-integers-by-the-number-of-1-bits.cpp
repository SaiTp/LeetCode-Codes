class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        vector <int> out;
        int a[n][2];
        int i,t,c,j;
        for(i=0;i<n;i++)
        {
            c=0;
            t=arr[i];
            while(t)
            {
                if(t&1)
                    c++;
                t>>=1;
            }
            a[i][0]=arr[i];
            a[i][1]=c;
        }
    for (i = 0; i < n-1; i++)       
    for (j = 0; j < n-i-1; j++)  
        if (a[j][1] > a[j+1][1])
        {
            a[j][1]^=a[j+1][1]^=a[j][1]^=a[j+1][1];
            a[j][0]^=a[j+1][0]^=a[j][0]^=a[j+1][0];
        }
          for (i = 0; i < n; i++)
              out.push_back(a[i][0]);
        return out;
    }
};