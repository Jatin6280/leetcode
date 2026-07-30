#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        
        vector<int> first;  // Stores positive numbers
        vector<int> second; // Stores negative numbers
        vector<int> ans;    // Stores the final result

        // Step 1: Separate elements into positives and negatives
        for (int i = 0; i < n; i++) {
            if (nums[i] >= 0) {
                first.push_back(nums[i]);
            } else {
                second.push_back(nums[i]);
            }
        }

        int idx1 = 0; // Tracks position in 'first'
        int idx2 = 0; // Tracks position in 'second'

        // Step 2: Interleave them back (Even index = positive, Odd index = negative)
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0 && idx1 < first.size()) {
                ans.push_back(first[idx1++]);
            } else if (idx2 < second.size()) {
                ans.push_back(second[idx2++]);
            }
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna