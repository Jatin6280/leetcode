class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int st =0;
        int end=n-1;
        
        while(st<=end){
            long long mid=(end+st)/2;
            if(nums[mid]>target){
                end=mid-1;
            }
            else if (nums[mid]<target){
                st =mid+1;
            }
            else{
                return mid;
            }
        }
        return -1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna