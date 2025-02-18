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
        queue<pair<TreeNode*,pair<int,int>>> q;
        q.push({root,{0,0}});
        while(!q.empty()){
            TreeNode *newnode=q.front().first;
            int hz=q.front().second.first;
            int lvl=q.front().second.second;
            q.pop();
            mp[hz][lvl].push_back(newnode->val);
            if(newnode->left){
                q.push({newnode->left,{hz-1,lvl+1}});
            }
            if(newnode->right){
                q.push({newnode->right,{hz+1,lvl+1}});
            }
        }  
        vector<vector<int>> ans;  
        for(auto& [hzd,levels]:mp){
            vector<int> col;
            for(auto& [lvl,values]:levels){
                sort(values.begin(),values.end());
                col.insert(col.end(),values.begin(),values.end()); 
            }
            ans.push_back(col);
        }   
        return ans;
    }
};