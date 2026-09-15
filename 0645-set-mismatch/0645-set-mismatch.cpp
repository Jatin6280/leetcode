class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();

        int actualSum = 0;
        int expectedSum = n * (n + 1) / 2;

        int repeating = 0;

        // Find repeating number
        for (int i = 0; i < n; i++) {
            actualSum += nums[i];

            for (int j = i + 1; j < n; j++) {
                if (nums[i] == nums[j]) {
                    repeating = nums[i];
                    break;
                }
            }
        }

        // Actual sum = expected sum - missing + repeating
        int missing = expectedSum - actualSum + repeating;

        return {repeating, missing};
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna