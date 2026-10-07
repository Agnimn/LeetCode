#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int rows = matrix.size();
        int cols = matrix[0].size();

        // Start from top-right corner
        int row = 0;
        int col = cols - 1;

        while (row < rows && col >= 0) {

            if (matrix[row][col] == target) {
                return true;
            }
            
            // Current value is greater than target
            // Move left
            else if (matrix[row][col] > target) {
                col--;
            }
            
            // Current value is smaller than target
            // Move down
            else {
                row++;
            }
        }

        return false;
    }
};