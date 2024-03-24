/* QUESTION:
You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit
of the integer. The digits are ordered from most significant to least significant in left-to-right order. 
The large integer does not contain any leading 0's.
-> Increment the large integer by one and return the resulting array of digits.
*/
class Solution {
public:
    std::vector<int> plusOne(std::vector<int>& digits) {
        int n = digits.size();
        for (int i = n - 1; i >= 0; --i) {
            if (digits[i] < 9) {
                ++digits[i]; // Increment the current digit
                return digits; // No carry, return the result
            } 
                digits[i] = 0; // Carry, set this digit to 0
        }
        // if all digits are 9, add an extra digit
        digits.insert(digits.begin(), 1);
        return digits;
    }
};