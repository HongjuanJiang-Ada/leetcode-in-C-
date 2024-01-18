# leetcode in C++  - day 1

## 54. Spiral Matrix

```cpp
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        if (matrix.empty()) return {};

        vector<int> result;
        int top = 0, bottom = matrix.size() - 1;
        int left = 0, right = matrix[0].size() - 1;

        while (top <= bottom && left <= right) {
            // Traverse from left to right.
            for (int j = left; j <= right; j++) {
                result.push_back(matrix[top][j]);
            }
            top++;

            // Traverse downwards.
            for (int i = top; i <= bottom; i++) {
                result.push_back(matrix[i][right]);
            }
            right--;

            // Make sure we are now on a different row.
            if (top <= bottom) {
                // Traverse from right to left.
                for (int j = right; j >= left; j--) {
                    result.push_back(matrix[bottom][j]);
                }
                bottom--;
            }

            // Make sure we are now in a different column.
            if (left <= right) {
                // Traverse upwards.
                for (int i = bottom; i >= top; i--) {
                    result.push_back(matrix[i][left]);
                }
                left++;
            }
        }

        return result;
    }
};

```