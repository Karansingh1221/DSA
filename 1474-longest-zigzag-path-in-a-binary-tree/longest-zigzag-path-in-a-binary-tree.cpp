/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void check(TreeNode* root, int count, bool left, int &maxi) {
        if (root == NULL) return;
        
        maxi = max(maxi, count); // Update max zigzag length
        
        if (left) {  
            if (root->right) check(root->right, count + 1, false, maxi); // Continue zigzag
            if (root->left) check(root->left, 1, true, maxi); // Reset when switching direction
        } else {  
            if (root->left) check(root->left, count + 1, true, maxi); // Continue zigzag
            if (root->right) check(root->right, 1, false, maxi); // Reset when switching direction
        }
    } 

    int longestZigZag(TreeNode* root) {
        if (root == NULL) return 0;
        
        int maxi = 0;
        if (root->left) check(root->left, 1, true, maxi);  // Start from left child
        if (root->right) check(root->right, 1, false, maxi); // Start from right child
        
        return maxi;
    }
};
