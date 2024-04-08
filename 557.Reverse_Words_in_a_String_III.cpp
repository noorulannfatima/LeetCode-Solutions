/*
Given a string s, reverse the order of characters in each word within a sentence
while still preserving whitespace and initial word order.
Example 1:
Input: s = "Let's take LeetCode contest"
Output: "s'teL ekat edoCteeL tsetnoc"
*/
// Time Complexity: O(n), Space Complexity: O(1)
class Solution {
 public:
  string reverseWords(string s) {
    int right = 0;
    int left = 0;

    while (right < s.length()) {
      while (right < left || right < s.length() && s[right] == ' ')
        ++right;
      while (left < right || left < s.length() && s[left] != ' ')
        ++left;
      reverse(s.begin() + right, s.begin() + left);
    }

    return s;
  }
};

/* Another Methode...
class Solution {
public:
    string reverseWords(string s) {
        int left = 0;
        int right = 0;
        while(right < s.length()){
            // If we find the space reverse the word
            if(s[right] == ' '){
                reverse(s, left, right - 1);
                left = right + 1;
            }
            right++;
        }
        //Reverse the last word
        reverse(s, left, right - 1);
        return s;
    }
private:
   void reverse(string &s, int left, int right){
    while(left < right){
        char temp = s[left];
        s[left++] = s[right];
        s[right--] = temp;
    }
  }
};*/
