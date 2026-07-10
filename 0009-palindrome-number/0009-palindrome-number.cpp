class Solution {
public:
    bool isPalindrome(int x) {
        // Negative numbers can never be palindromes
        if (x < 0) {
            return false;
        }

        long original = x;
        long reversed = 0;

        while (x > 0) {
            int digit = x % 10;                // extract last digit
            reversed = reversed * 10 + digit;   // build the reversed number
            x = x / 10;                          // remove last digit
        }

        return original == reversed;
    }
};