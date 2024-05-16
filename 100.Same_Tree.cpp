//  Time complexity is O(n) and Space complexity is O(n)

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // Base case
        if (!p || !q)
            return (p == q);

        // Check if the values are equal
        return (p->val == q->val) &&  // Check if values are equal
               isSameTree(p->left, q->left) &&  //  check left subtrees
               isSameTree(p->right, q->right);  // check right subtrees
    }
};

