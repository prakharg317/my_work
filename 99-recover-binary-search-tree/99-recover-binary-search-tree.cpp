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
    int i=0;
    
    void modify(TreeNode * root, vector<int>&v2)
    {
     if(root==NULL)return;
        
        modify(root->left,v2);
        if(root->val==v2[i])
        {
            
        }
        
        else
        {
            root->val=v2[i];
        }
        i++;
        modify(root->right,v2);
        
        
        
        
    }
        
    void inorder(TreeNode * root, vector<int>&v1)
    {
        if(root==NULL)return;
        inorder(root->left,v1);
        v1.push_back(root->val);
        inorder(root->right,v1);
    }
    
    void recoverTree(TreeNode* root) 
    {
       vector<int>v1;
        vector<int>v2;
        
        inorder(root,v1);
        
        v2=v1;
        
        sort(v2.begin(),v2.end());
        
        
       
        modify(root,v2);
        
        
    }
};