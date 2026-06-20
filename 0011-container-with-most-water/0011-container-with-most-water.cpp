class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_water = 0;
        // Time Complexity: O(N) where N = height.size()
        // Space Complexity: O(1) – only a few integer variables are used.
        // This two-pointer approach works because moving the shorter line inward
        // gives a chance to find a taller line that could increase the area,
        // while the width always decreases.
        int left = 0;
        int right = height.size() - 1;
        
        while (left < right) {
     
            int width = right - left;
            
          
            int current_height = min(height[left], height[right]);
            
          
            int current_area = current_height * width;
            max_water = max(max_water, current_area);
            
     
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }
       
        return max_water;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna