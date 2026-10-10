 class Solution {
    public int missingNumber(int[] nums) {
        int s = nums.length;
        Arrays.sort(nums);

        for (int i = 0; i < s; i++) {
            if (nums[i] != i) {
                return i;
            }
        }

        return s;
    }
}