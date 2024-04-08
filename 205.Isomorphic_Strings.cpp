/*
Given two strings s and t, determine if they are isomorphic.
-> Two strings s and t are isomorphic if the characters in s can be replaced to get t.
-> All occurrences of a character must be replaced with another character while preserving the order of characters.
No two characters may map to the same character, but a character may map to itself.
-> Example 1:
Input: s = "egg", t = "add"
Output: true
*/
// Time Complexity: O(n), Space Complexity: O(n)
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> sToTMapping;
        unordered_map<char, char> tToSMapping;
        
        for (int i = 0; i < s.size(); ++i) {
            char sChar = s[i];
            char tChar = t[i];
            // Check mapping from s to t
            if (sToTMapping.find(sChar) == sToTMapping.end()) {
                sToTMapping[sChar] = tChar;
            } else {
                if (sToTMapping[sChar] != tChar) {
                    return false;
                }
            }
            // Check mapping from t to s
            if (tToSMapping.find(tChar) == tToSMapping.end()) {
                tToSMapping[tChar] = sChar;
            } else {
                if (tToSMapping[tChar] != sChar) {
                    return false;
                }
            }
        }
        return true;
    }
};