class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> missing;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size() - 1; i++) {
            int gap = nums[i + 1] - nums[i];

            for (int j = 1; j < gap; j++) {
                missing.push_back(nums[i] + j);
            }
        }

        return missing;
    }
};