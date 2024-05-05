#include <vector>
#include <stack>
#include <unordered_map>
using namespace std;


// Time Complexity O(n + m) and Space Complexity O(n)

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        // Hash map to store the next greater element 
        unordered_map<int, int> nextGreaterMap;
        // Stack to help find the next greater element
        stack<int> helperStack;

        // Iterate through nums2 from right to left
        for (int i = nums2.size() - 1; i >= 0; i--) {
            while (!helperStack.empty() && nums2[helperStack.top()] <= nums2[i]) {
                helperStack.pop(); // If it is not the next greater element
            }
            
            // If it is the next greater element
            if (!helperStack.empty()) {
                nextGreaterMap[nums2[i]] = nums2[helperStack.top()];
            } else {
                // If the stack is empty, there is no greater element
                nextGreaterMap[nums2[i]] = -1;
            }
            helperStack.push(i);
        }
        // Iterate through nums1 and replace each element with its next greater element from nums2
        for (auto &x : nums1) {
            x = nextGreaterMap[x];
        }
        // Return the modified nums1 vector with next greater elements
        return nums1;
    }
};
