class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        sort(nums.begin(), nums.end()); // Sort the elements of nums in ascending order
        vector<vector<int>> ans;
        do {
            ans.push_back(nums); // Add the current permutation to the result vector
        } while (next_permutation(nums.begin(), nums.end())); // Generate the next permutation until no more permutations exist

        return ans; // Return the vector of permutations
    }
};
// Time comlexity O[(n!)n] and Space Complexity O[(n!)n]. 