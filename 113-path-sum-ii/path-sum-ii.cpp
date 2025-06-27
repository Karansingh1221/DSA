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
    vector<vector<int>> result;
    void solve(TreeNode* root,int sum,int target,vector<int> temp){
        if(!root) return;
        sum+=root->val;
        temp.push_back(root->val);
        if(!root->left && !root->right && sum==target){
            result.push_back(temp);
        }
        cout<<sum<<endl;
        solve(root->left,sum,target,temp);
        solve(root->right,sum,target,temp);
        temp.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> temp;
        solve(root,0,targetSum,temp);   
        return result;
    }
};