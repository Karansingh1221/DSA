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
    int count=0;
    void check(TreeNode *root,int target,long long sum){
        if(root==NULL) return;
        sum=sum+root->val;
        if(sum==target) count++;
        check(root->left,target,sum);
        check(root->right,target,sum);
    }
    int pathSum(TreeNode* root, int targetSum) {
        if(root==NULL) return 0;
        check(root,targetSum,0);
        root->left?pathSum(root->left,targetSum):NULL;
        root->right?pathSum(root->right,targetSum):NULL;
        return count;
    }
};