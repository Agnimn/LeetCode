class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        vector<vector<int>> result;

        // Sort the array so we can use the two-pointer approach
        sort(nums.begin(), nums.end());

        // Fix one element at a time
        for(int i = 0; i < nums.size(); i++) {

            // Since the array is sorted, no future triplet can sum to 0
            if(nums[i] > 0)
                break;

            // Skip duplicate values for i
            if(i > 0 && nums[i] == nums[i - 1])
                continue;

            // Two pointers
            int j = i + 1;
            int k = nums.size() - 1;

            while(j < k) {

                int currSum = nums[i] + nums[j] + nums[k];

                // Found a valid triplet
                if(currSum == 0) {

                    result.push_back({nums[i], nums[j], nums[k]});

                    // Skip duplicate values from the left
                    while(j < k && nums[j] == nums[j + 1])
                        j++;

                    // Skip duplicate values from the right
                    while(j < k && nums[k] == nums[k - 1])
                        k--;

                    // Move both pointers
                    j++;
                    k--;
                }

                // Sum is too small  increase j
                else if(currSum < 0) {
                    j++;
                }

                // Sum is too large  decrease k
                else {
                    k--;
                }
            }
        }

        return result;
    }
};