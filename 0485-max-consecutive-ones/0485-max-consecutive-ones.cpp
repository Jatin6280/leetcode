class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxCount = 0;
        int currentCount = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                currentCount++;
                maxCount = max(maxCount, currentCount); // Update max if current streak is higher
            } else {
                currentCount = 0; // Reset streak when a 0 is hit
            }
        }
        
        return maxCount;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna