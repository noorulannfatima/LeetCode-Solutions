/*
Given the root of a complete binary tree, return the number of the nodes in the tree.
-> According to Wikipedia, every level, except possibly the last, is completely filled in a complete binary tree, 
and all nodes in the last level are as far left as possible. It can have between 1 and 2h nodes inclusive at the 
last level h.
-> Design an algorithm that runs in less than O(n) time complexity.
*/
#include <cmath> // For mathematical functions like pow
class Solution {
public:
    int countNodes(TreeNode* root) { 
        int left = leftDepth(root); // Calculate the depth of the left subtree
        int right = rightDepth(root); // Calculate the depth of the right subtree
        
        if(left == right){ // If equal, the tree is a full binary tree
            return (int) pow(2, left) - 1;  // Return the total number of nodes in a full binary tree
        } else { 
            return 1 + countNodes(root->left) + countNodes(root->right); // Count nodes recursively
        }
        
    }
private:
   int rightDepth(TreeNode* root){ // Helper function to calculate the depth of the right subtree
    int dep = 0; 
    while(root != NULL){ // Traverse down the right subtree until reaching the leaf node
        root = root->right; 
        dep++; 
    }
    return dep; 
}
private:
   int leftDepth(TreeNode* root){ // Helper function to calculate the depth of the left subtree
    int dep = 0; 
    while(root != NULL){ // Traverse down the left subtree until reaching the leaf node
        root = root->left; 
        dep++; 
    }
    return dep;
}
};

 //Time Complexity: O(log n * log n), Space Complexity: O(log n)