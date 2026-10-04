 class Solution {
    public int climbStairs(int n) {
        // Create a memo array to store results we've already calculated
        int[] memo = new int[n + 1];
        return helper(n, memo);
    }
    
    private int helper(int n, int[] memo) {
        // Base cases
        if (n <= 2) {
            return n;
        }
        
        // If we already calculated this step, return the saved value
        if (memo[n] != 0) {
            return memo[n];
        }
        
        // Otherwise, calculate it, save it in the memo array, and return it
        memo[n] = helper(n - 1, memo) + helper(n - 2, memo);
        return memo[n];
    }
}