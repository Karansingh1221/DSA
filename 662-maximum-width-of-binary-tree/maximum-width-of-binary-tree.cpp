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
    int widthOfBinaryTree(TreeNode* root) {
        if(root==NULL) return 0;
        queue<pair<TreeNode*,long long>> q;
        q.push({root,0});
        long long res=1;
        while(!q.empty()){
            long long start=q.front().second;
            long long end=q.back().second;
            res=max(res,(end-start)+1);
            int cnt=q.size();
            for(int i=0;i<cnt;i++){
                TreeNode* newnode=q.front().first;
                long long idx=q.front().second-start;
                q.pop();
                if(newnode->left){
                    q.push({newnode->left,(long long)2*idx+1});
                }
                if(newnode->right){
                    q.push({newnode->right,(long long)2*idx+2});
                }
            }
        }
        return res;
    }
};