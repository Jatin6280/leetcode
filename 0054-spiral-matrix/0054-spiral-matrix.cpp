 class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int st = 0;
        int end = matrix.size() - 1;
        int left = 0;
        int right = matrix[0].size() - 1;
        vector<int> ans;

        while (st <= end && left <= right) {
            // top row: left -> right
            for (int j = left; j <= right; j++) {
                ans.push_back(matrix[st][j]);
            }
            st++;

            // right column: top -> bottom
            for (int i = st; i <= end; i++) {
                ans.push_back(matrix[i][right]);
            }
            right--;

            // bottom row: right -> left
            if (st <= end) {
                for (int j = right; j >= left; j--) {
                    ans.push_back(matrix[end][j]);
                }
                end--;
            }

            // left column: bottom -> top
            if (left <= right) {
                for (int i = end; i >= st; i--) {
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna