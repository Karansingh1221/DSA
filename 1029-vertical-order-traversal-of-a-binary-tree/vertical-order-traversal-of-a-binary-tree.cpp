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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,vector<int>>> mp;
        vector<vector<int>> res;
        int hd=0;
        int vd=0;
        //hd,vd
        queue<pair<TreeNode*,pair<int,int>>> q;
        q.push({root,{hd,vd}});
        mp[hd][vd].push_back(root->val);
        while(!q.empty()){
            int s=q.size();
            for(int i=0;i<s;i++){
                auto newnode=q.front();
                q.pop();
                int nhd=newnode.second.first;
                int nvd=newnode.second.second;
                if(newnode.first->left){
                    q.push({newnode.first->left,{nhd-1,nvd+1}});
                    mp[nhd-1][nvd+1].push_back(newnode.first->left->val);
                }
                if(newnode.first->right){
                    q.push({newnode.first->right,{nhd+1,nvd+1}});
                    mp[nhd+1][nvd+1].push_back(newnode.first->right->val);
                }
            }
        }
        for(auto x:mp){
            vector<int> v;
            for(auto y:x.second){
                sort(y.second.begin(),y.second.end());
                for(int i:y.second){
                    v.push_back(i);
                }
            }
            res.push_back(v);
        }
        return res;
    }
};