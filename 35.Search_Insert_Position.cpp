/* QUESTION:
Given a sorted array of distinct integers and a target value, return the index if the target is found. 
If not, return the index where it would be if it were inserted in order.
-> You must write an algorithm with O(log n) runtime complexity.
*/
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
    int left = 0;
    int right = nums.size() - 1;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            
            if (nums[mid] == target) {
                return mid; // Found the target, return its index
            } else if (nums[mid] < target) {
                left = mid + 1; // Target is on the right half
            } else {
                right = mid - 1; // Target is on the left half
            }
        }
        
        // If the loop exits, it means the target is not found
        // The index where the target would be inserted is the left pointer
        return left;   
    }
};