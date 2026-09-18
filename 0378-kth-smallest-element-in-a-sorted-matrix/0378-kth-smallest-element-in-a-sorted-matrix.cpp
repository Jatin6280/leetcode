class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int> v;

        int rows = matrix.size();
        int col = matrix[0].size();

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < col; j++) {
                v.push_back(matrix[i][j]);
            }
        }

        sort(v.begin(), v.end());

        return v[k - 1];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna