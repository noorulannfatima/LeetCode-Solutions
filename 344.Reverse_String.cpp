/*
Write a function that reverses a string. The input string is given as an array of characters s.
You must do this by modifying the input array in-place with O(1) extra memory.
Example 1:
Input: s = ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]
*/
// Time Complexity: O(n), Space Complexity: O(1)
class Solution {
public:
    void reverseString(vector<char>& s) {
        int leftPtr = 0;
        int rightPtr = s.size()-1;
        while(leftPtr < rightPtr){
            char temp = s[leftPtr];
            s[leftPtr++] = s[rightPtr];
            s[rightPtr--] = temp;
        }   
    }
};
/* Another Methode...
class Solution {
 public:void reverseString(vector<char>& s) {
        reverse(s.begin(),s.end());
   }
};
*/