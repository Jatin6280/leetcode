 class Solution {
    public void reverseString(char[] s) {
        // Call the helper function with the array, start index, and end index
        helper(s, 0, s.length - 1);
    }
    
    public void helper(char[] s, int left, int right) {
        // 1. Base case: If left and right meet or cross, stop recursing
        if (left >= right) {
            return;
        }
        
        // 2. Swap the characters at left and right
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        
        // 3. Recursive step: move both pointers inward
        helper(s, left + 1, right - 1);
    }
}