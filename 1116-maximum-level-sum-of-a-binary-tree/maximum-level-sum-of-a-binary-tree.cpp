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
    void level(TreeNode* root,vector<int>& v){
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int s=q.size();
            int sum=0;
            for(int i=0;i<s;i++){
                TreeNode *node=q.front();
                q.pop();
                sum+=node->val;
                if(node->left)q.push(node->left);
                if(node->right)q.push(node->right);
            }
            v.push_back(sum);
        }
    }
    int maxLevelSum(TreeNode* root) {
        if(root==NULL) return 0;
        vector<int> v;
        level(root,v);
        int ans=1;
        int max=v[0];
        for(int i=0;i<v.size();i++){
            if(max<v[i]){
                max=v[i];
                ans=i+1;
            }
        }
        return ans;
    }
};