class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        for(int i = 0; i < nums.size(); i++){
            //calculate need 
            int need = target - nums[i];
            
            //Check if the required number has already been seen
            if(mp.count(need)){
                
                //Return the index of the required number and current index
                return {mp[need], i};
            }
            mp[nums[i]] = i; // Store the current number and its index in the hash map
        }
        return {};
    }
};