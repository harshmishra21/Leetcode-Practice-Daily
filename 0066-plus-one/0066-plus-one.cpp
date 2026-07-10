class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();

        // start from the last digit and move left
        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;      // just add 1 here, no carry needed
                return digits;     // we're done, return immediately
            }
            digits[i] = 0;         // digit was 9, it becomes 0, carry moves left
        }

        // if we reach here, every digit was 9 (e.g. [9,9,9] -> [1,0,0,0])
        digits.insert(digits.begin(), 1);
        return digits;
    }
};