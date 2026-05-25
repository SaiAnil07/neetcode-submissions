class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int,int> mp;

        for(auto it:nums){
            mp[it]++;
        }

        vector<pair<int,int>> vec(mp.begin(),mp.end());
        
        sort(vec.begin(),vec.end(),[](pair<int,int>a,pair<int,int>b){
            if(a.second == b.second) {
                return a.first < b.first;
            }
            return a.second > b.second;
        });
    vector<int> res;

    for(int i=0;i<k;i++){
        res.push_back(vec[i].first);
    }
        return res;
    }
};
