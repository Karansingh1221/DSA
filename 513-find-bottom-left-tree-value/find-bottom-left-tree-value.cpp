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
    // int ans=;
    void solve(TreeNode* root,int h,int& height,int& ans){
        if(root==NULL) return ;
        if(h>height){
            height=h;
            ans=root->val;
        }
        solve(root->left,h+1,height,ans);
        solve(root->right,h+1,height,ans);
        
    }
    int findBottomLeftValue(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        int ans=root->val;
        int height=0;
        solve(root,1,height,ans);
        return ans;
        
    }
};