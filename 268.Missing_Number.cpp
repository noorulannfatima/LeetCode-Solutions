/*Description: Given an array nums containing n distinct numbers in the range [0, n], 
return the only number in the range that is missing from the array.
Example 1:
Input: nums = [3,0,1]
Output: 2
Explanation: n = 3 since there are 3 numbers, so all numbers are in the range [0,3]. 
2 is the missing number in the range since it does not appear in nums.*/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int allXOR = 0;
        // XOR all numbers in range[0,n]
        for (int i=0; i<= nums.size(); i++){
            allXOR = allXOR ^ i;
        }
        // XOR all numbers in given array
        for(int num : nums){
            allXOR = allXOR ^ num;
        }
        // return missing number
        return allXOR;
    }
};
// Time complexity O(n) and Space complexity O(1). 

/* Logic: --Using properties of XOR--
Commutative Property: 𝐴 ⊕ 𝐵 = 𝐵 ⊕ 𝐴
Associative Property: (A ⊕ B) ⊕ C=A ⊕ ( B ⊕ C )
Identity Property: A ⊕ 0 = A
Inverse Property: A ⊕ A = 0*/