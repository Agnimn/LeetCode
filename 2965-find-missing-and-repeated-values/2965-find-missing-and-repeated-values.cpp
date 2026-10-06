class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {

        vector<int> ans;
        unordered_set<int> s;

        int n = grid.size();
        int a, b;

        int expSum = 0, actualSum = 0;

        // Traverse the entire grid
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {

                actualSum += grid[i][j];

                // If number is already present, it is repeated
                if (s.find(grid[i][j]) != s.end()) {
                    a = grid[i][j];
                    ans.push_back(a);
                }

                // Insert number into set
                s.insert(grid[i][j]);
            }
        }

        // Expected sum of numbers from 1 to n²
        expSum = (n * n) * (n * n + 1) / 2;

        // Find the missing number
        b = expSum + a - actualSum;

        ans.push_back(b);

        return ans;
    }
};