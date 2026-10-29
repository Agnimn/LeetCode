class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<int,int> mp;
        for(int x : magazine){
            mp[x]++;
        }
        for(int x : ransomNote){
            if(mp[x] == 0){
                return false;
            }
            mp[x]--;
        }
        return true;
    }
};