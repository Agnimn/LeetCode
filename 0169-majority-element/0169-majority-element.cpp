class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        int maj = 0;
        int n = nums.size();
        for(int x : nums){
            mp[x]++;
            if(mp[x] > n/2){
               maj = x;
               break;
            }
        }
        
        return maj;
    }
};