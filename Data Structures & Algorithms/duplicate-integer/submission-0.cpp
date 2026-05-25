class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;

      for(auto it:nums){
        mp[it]++;
      }

      for(auto const& [key, val] : mp){
        if(val > 1){
            return true;
        }
      }
      return false;
        
    }
};