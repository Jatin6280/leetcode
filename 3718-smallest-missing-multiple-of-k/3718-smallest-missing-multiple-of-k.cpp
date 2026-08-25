class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());

        vector<int> nums1;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0 && nums[i] % k == 0) {
                if (nums1.empty() || nums1.back() != nums[i]) {
                    nums1.push_back(nums[i]);
                }
            }
        }

        int expected = k;

        for (int x : nums1) {
            if (x != expected) {
                return expected;
            }
            expected += k;
        }

        return expected;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna