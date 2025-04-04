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
    TreeNode* LCA(TreeNode* root,TreeNode *p,TreeNode *q){
        if(root==NULL) return NULL;
        if(root==p || root==q){
            return root;
        }
        TreeNode* left=LCA(root->left,p,q);
        TreeNode* right=LCA(root->right,p,q);
        if(left && right) return root;
        return left? left:right;
    }
    void levelorder(TreeNode *root,vector<vector<TreeNode*>>& v){
        if(root==NULL) return;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            vector<TreeNode*> v1;
            int size=q.size();
            for(int i=0;i<size;i++){
                TreeNode *temp=q.front();
                q.pop();
                v1.push_back(temp);
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
            v.push_back(v1);
        }
    }
    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        if(root==NULL) return NULL;
        vector<vector<TreeNode*>> v;
        levelorder(root,v);
        vector<TreeNode*> v1=v.back();
        if(v1.size()==1) return v1[0];

        return LCA(root,v1.front(),v1.back());

    }
};