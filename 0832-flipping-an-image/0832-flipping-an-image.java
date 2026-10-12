  class Solution {
    public int[][] flipAndInvertImage(int[][] image) {
        int n = image.length;
        
        // Step 1: Reverse each row horizontally using nested for loops
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n / 2; j++) {
                int temp = image[i][j];
                image[i][j] = image[i][n - 1 - j];
                image[i][n - 1 - j] = temp;
            }
        }
        
        // Step 2: Invert each bit using nested for loops
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                image[i][j] ^= 1; // XOR with 1 flips 0 to 1 and 1 to 0
            }
        }
        
        return image;
    }
}