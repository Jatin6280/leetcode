class Solution {
public:
    bool isPalindrome(int x) {
        int original = x;
        long long r = 0;

        if (x < 0)
            return false;

        while (x != 0) {
            int digit = x % 10;
            x /= 10;
            r = r * 10 + digit;
        }

        if (r == original)
            return true;

        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna