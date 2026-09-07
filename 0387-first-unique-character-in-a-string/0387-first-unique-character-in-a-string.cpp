class Solution {
public:
    int firstUniqChar(string s) {
        int freq[26] = {0};

        // Count frequency
        for(int i = 0; i < s.length(); i++) {
            freq[s[i] - 'a']++;
        }

        // Find first character with frequency 1
        for(int i = 0; i < s.length(); i++) {
            if(freq[s[i] - 'a'] == 1) {
                return i;
            }
        }

        return -1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna