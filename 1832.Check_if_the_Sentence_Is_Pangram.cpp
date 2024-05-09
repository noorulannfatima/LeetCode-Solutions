class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_set<char> alphaSet;
        // Adding all characters from 'a' to 'z' in a set
        for (char c = 'a'; c <= 'z'; c++) {
            alphaSet.insert(c);
        }
        // Removing every character from set
        for (char c : sentence) {
            alphaSet.erase(c);
        }
        // Check if set is empty
        return alphaSet.empty();
    }
};
// Time complexity: O(n) and Space complexity: O(1)