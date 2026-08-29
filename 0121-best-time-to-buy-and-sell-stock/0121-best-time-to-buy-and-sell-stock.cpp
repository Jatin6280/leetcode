class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int s = prices.size();
        int buy = prices[0];
        int ans = 0;

        for (int i = 1; i < s; i++) {
            buy = min(buy, prices[i]);
            ans = max(ans, prices[i] - buy);
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna