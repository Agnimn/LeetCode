class Solution {
public:
    vector<vector<int>> memo;

    int solve(int i, int j, vector<int>& nums) {
        if (i == j)
            return nums[i];

        if (memo[i][j] != INT_MIN)
            return memo[i][j];

        int pickLeft = nums[i] - solve(i + 1, j, nums);
        int pickRight = nums[j] - solve(i, j - 1, nums);

        return memo[i][j] = max(pickLeft, pickRight);
    }

    bool predictTheWinner(vector<int>& nums) {
        int n = nums.size();

        memo.assign(n, vector<int>(n, INT_MIN));

        return solve(0, n - 1, nums) >= 0;
    }
};