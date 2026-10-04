class Solution {
    public int fib(int n) {
        // Base cases for 0 and 1
        if (n <= 1) {
            return n;
        }
        // Recursive step
        return fib(n - 1) + fib(n - 2);
    }
}