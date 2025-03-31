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
    int solve(TreeNode *root){
        if(root==NULL){
            return 0;
        }
        int left=solve(root->left);
        int right=solve(root->right);
        return max(left,right)+1;

    }
    int maxDepth(TreeNode* root) {
        int height=solve(root);
        return height;
    }
};
        // if(root==NULL) return 0;
        // queue<TreeNode*>q;
        // q.push(root);
        // int height=0;
        // while(!q.empty()){
        //     int n=q.size();
        //     for(int i=0;i<n;i++){
        //         TreeNode* node=q.front();
        //         q.pop();
        //         if(node->left) q.push(node->left);
        //         if(node->right) q.push(node->right);
        //     }
        //     height++;
        // }        
        // return height;