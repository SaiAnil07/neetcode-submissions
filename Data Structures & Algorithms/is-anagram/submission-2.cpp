class Solution {
public:
    bool isAnagram(string s, string t) {

         if(s.size()!=t.size()) return false;

        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());

        // if(s==t){
        //     return true;
        // }
        // return false;

        vector<int> res(26, 0);

        for(int i=0;i<s.size();i++){
            res[s[i] - 'a']++;
            res[t[i] - 'a']--;
        }

        for(auto check:res){
            if(check !=0) return false;
        }
        return true;
    }
};
