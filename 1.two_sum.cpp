/*Given an array of integers nums and an integer target, return indices of 
the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and 
you may not use the same element twice.
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        for (int i=0;i<nums.size();i++){
            for (int j=i+1; j< nums.size();j++){
                if(nums[i]+nums[j]==target){
                return{i,j};
                }
            }
        }
        return {};  //return an empty vector if no pair found
    }
};
//  time complexity of O(n^2)