class Solution {
public:
    int reverse(int x) {
        
        vector<int> v;
        
        while (x != 0) {
            v.push_back(x % 10);
            x /= 10;
        }


        long long ans = 0;

        for (int i = 0; i < v.size(); i++) {
            ans = ans * 10 + v[i];
        }

        if (ans > INT_MAX || ans < INT_MIN)
            return 0;

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna