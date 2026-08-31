class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int st = 0;
        int end = n - 1;

        while(st < end) {
            int mid = st + (end - st) / 2;

            if(arr[mid] < arr[mid + 1]) {
                st = mid + 1;
            }
            else {
                end = mid;
            }
        }

        return st;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna