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
    // void solve(TreeNode* root,int& val,TreeNode* prev){
    //     if(root==NULL){
    //         return ;
    //     }
    //     if(root->val<val){
    //         swap(prev->val,root->val);
    //         return ;
    //     }
    //     solve(root->left,val,prev);
    //     prev=root;
    //     val=root->val;
    //     solve(root->right,val,prev);
    // }
    vector<int> v;
    void inorder(TreeNode* root){
        if(root==NULL) return;
        inorder(root->left);
        v.push_back(root->val);
        inorder(root->right);
    }
    void search(TreeNode* root,TreeNode*& first, TreeNode*& second,int f,int s){
        if(root==NULL) return;
        if(root->val==f) first=root;
        if(root->val==s) second=root;
        search(root->left,first,second,f,s);
        search(root->right,first,second,f,s);
        return;
    }
    void recoverTree(TreeNode* root) {
        // int val=INT_MIN;
        // TreeNode* prev=new TreeNode(0);
        // solve(root,val,prev);
        inorder(root);
        int f=0,s=0;
        bool flag=false;
        
        for(int i=1;i<v.size();i++){
            if(v[i]<v[i-1]){
                f=v[i-1];
                break;
            }
        }
        for(int i=1;i<v.size();i++){
            if(v[i]<v[i-1]){
                s=v[i];
            }
        }
        TreeNode* first=NULL;
        TreeNode* second=NULL;
        search(root,first,second,f,s);
        swap(first->val,second->val);

    }
};