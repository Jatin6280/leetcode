     class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.empty()) return 0;

        int minPrice = prices[0];
        int maxProf = 0;

        for (int i = 1; i < prices.size(); i++) {
            // Update the lowest buying price seen so far
            minPrice = min(minPrice, prices[i]);
            
            // Calculate profit if we sold today, and update maxProf
            maxProf = max(maxProf, prices[i] - minPrice);
        }

        return maxProf;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna