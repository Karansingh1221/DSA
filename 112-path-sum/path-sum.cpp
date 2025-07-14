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
    bool ans=false;
    void solve(TreeNode* root,int sum,int target){
        if(root==NULL){
            return;
        }
        sum+=root->val;
        cout<<sum<<endl;
        if(sum==target && !root->left && !root->right){
            ans=true;
            return;
        } 
        solve(root->left,sum,target);
        solve(root->right,sum,target);
        return ;
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL) return false;
        int sum=0;
        solve(root,0,targetSum);
        return ans;
    }
};