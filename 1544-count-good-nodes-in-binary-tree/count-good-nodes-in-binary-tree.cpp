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
    int goodNodes(TreeNode* root) {
        if(root==NULL) return 0;
        int count=0;
        queue<pair<TreeNode*,int>> q;
        q.push({root,root->val});
        while(!q.empty()){
            TreeNode *temp=q.front().first;
            int maxval=q.front().second;
            int size=q.size();
            q.pop();
            if(temp->val>=maxval){
                count++;
                maxval=temp->val;
            }
            if(temp->left) q.push({temp->left,maxval});
            if(temp->right) q.push({temp->right,maxval});
            
        }
        return count;
    }
};