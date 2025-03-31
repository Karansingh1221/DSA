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
    void solve(TreeNode *head,vector<int>& v){
        if(!head) return;
        if(!head->left && !head->right){
            v.push_back(head->val);
        }
        solve(head->left,v);
        solve(head->right,v);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> v1,v2;
        solve(root1,v1);
        solve(root2,v2);
        if(v1==v2) return true;
        return false;
    }
};