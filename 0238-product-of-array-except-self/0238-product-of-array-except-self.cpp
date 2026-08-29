     class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        vector<int> v(nums.size());

        int mul = 1;
        int zero = 0;

        // Find product of all non-zero elements
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 0) {
                zero++;
            }
            else {
                mul *= nums[i];
            }
        }

        // Build answer
        for(int i = 0; i < nums.size(); i++) {

            if(zero > 1) {
                v[i] = 0;
            }
            else if(zero == 1) {
                if(nums[i] == 0)
                    v[i] = mul;
                else
                    v[i] = 0;
            }
            else {
                v[i] = mul / nums[i];
            }
        }

        return v;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna