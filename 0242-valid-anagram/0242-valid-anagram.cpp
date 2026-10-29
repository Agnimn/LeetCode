class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int,int> mp1;
        unordered_map<int,int> mp2;
        if(s.size() != t.size())
            return false;
        for(int x: s){
            mp1[x]++;
        }
        for(int x: t){
            mp2[x]++;
        }
        for(int i =0; i<s.size(); i++){
            if(mp1[s[i]] != mp2[s[i]]){
                return false;
            }
        }
        return true;
    }
};