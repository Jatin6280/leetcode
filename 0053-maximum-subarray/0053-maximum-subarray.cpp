class Solution {
public:
 
        int maxSubArray(vector<int>& nums) {
        int currentSum = nums[0];
        int maxSum = nums[0];

        for (size_t i = 1; i < nums.size(); ++i) {
            // Decide: extend the existing subarray or start a new one from the current element
            currentSum = max(nums[i], currentSum + nums[i]);
            
            // Update the global maximum found so far
            maxSum = max(maxSum, currentSum);
        }

        return maxSum;
    }
    
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna