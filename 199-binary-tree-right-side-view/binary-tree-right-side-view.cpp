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
    vector<int> rightSideView(TreeNode* root) {
        if(root==NULL) return {};
        queue<TreeNode*> q;
        q.push(root);
        // vector<vector<int>> v;
        vector<int> ans;
        while(!q.empty()){
            // vector<int> temp;
            int size=q.size();
            ans.push_back(q.back()->val);
            for(int i=0;i<size;i++){
                TreeNode* newnode=q.front();
                q.pop();
                // temp.push_back(newnode->val);
                if(newnode->left) q.push(newnode->left);
                if(newnode->right) q.push(newnode->right);
            }
            // v.push_back(temp);
        }
        // for(int i=0;i<v.size();i++){
        //     ans.push_back(v[i].back());
        // }
        return ans;
    }
};