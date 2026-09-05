class Solution {
public:
    void reverseString(vector<char>& s) {
        int st=0;
        int end = s.size()-1;
        while(st<end){
            swap(s[st],s[end]);
            st++;
            end--;
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna