class TweetCounts {
unordered_map<string,multiset<int>>m;
public:
    TweetCounts() {
        m.clear();
    }
    
    void recordTweet(string ttN, int t) {
        m[ttN].insert(t);
    }
    
    vector<int> getTweetCountsPerFrequency(string freq, string tN, int sT, int eT) {
        int intV=60;
        if(freq=="hour") intV=3600;
        else if(freq=="day") intV=86400;
        vector<int>ans((eT-sT)/intV+1);
        auto i = m[tN].lower_bound(sT);
        auto j = m[tN].upper_bound(eT);
        for(;i!=j;i++){
            ans[(*i-sT)/intV]++;
        }
        return ans;
    }
};

/**
 * Your TweetCounts object will be instantiated and called as such:
 * TweetCounts* obj = new TweetCounts();
 * obj->recordTweet(tweetName,time);
 * vector<int> param_2 = obj->getTweetCountsPerFrequency(freq,tweetName,startTime,endTime);
 */