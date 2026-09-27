class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {

        // 1. Sort by starting point
        sort(intervals.begin(), intervals.end());

        vector<vector<int>> ans;

        // 2. Start with the first interval
        ans.push_back(intervals[0]);

        // 3. Check every remaining interval
        for(int i = 1; i < intervals.size(); i++) {

            // If overlapping
            if(intervals[i][0] <= ans.back()[1]) {

                // Extend the ending point
                ans.back()[1] = max(ans.back()[1], intervals[i][1]);

            } 
            else {
                // No overlap → add new interval
                ans.push_back(intervals[i]);
            }
        }

        return ans;
    }
};