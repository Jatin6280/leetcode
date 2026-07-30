#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // 1. Handle empty array edge case
        if (nums.empty()) {
            return 0; 
        }

        // 2. Sort the array to bring consecutive numbers together
        sort(nums.begin(), nums.end());

        int longest = 1;
        int current_streak = 1;

        // 3. Iterate and track streaks
        for (int i = 0; i < nums.size() - 1; i++) {
            // Ignore duplicates
            if (nums[i] == nums[i + 1]) {
                continue;
            }

            // Check if consecutive
            if (nums[i] + 1 == nums[i + 1]) {
                current_streak++;
            } else {
                // Sequence broke: update max and reset current streak
                longest = max(longest, current_streak);
                current_streak = 1;
            }
        }

        // Final check to catch the longest streak if it ends at the last element
        longest = max(longest, current_streak);

        return longest;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna