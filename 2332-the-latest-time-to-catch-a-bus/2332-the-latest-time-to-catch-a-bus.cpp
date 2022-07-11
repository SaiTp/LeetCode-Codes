class Solution {
public:
    int latestTimeCatchTheBus(vector<int>& buses, vector<int>& passengers, int capacity) {
     sort(buses.begin(),buses.end());
     sort(passengers.begin(),passengers.end());
        int n=buses.size();
        int m=passengers.size();
        int ans=0,j=0,lastp,t;
     unordered_map<int,int>mp;
        for(auto i:passengers)
            mp[i]++;
     for(int i=0;i<n;i++)
     {
         t=0;
         while(j<m && passengers[j]<=buses[i] && t<capacity)
         {
             t++;
             lastp=passengers[j];
             j++;
         }
     }
        if(t<capacity)
       ans=buses[n-1];
            else
                ans=lastp-1;
while(mp[ans]>0)
    ans--;
        return ans;
    }
};