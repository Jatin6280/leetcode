class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> counts;
        int n=nums.size();
        for(int num:nums){
            counts[num]++;
            if(counts[num]>(n/2)){
                return num;
            }
        }
        return -1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna