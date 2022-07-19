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
    int hot(TreeNode *root, vector<int>&v)
    {
        if(root==NULL)return 0;
        
        int x= hot(root->left,v);
        int y= hot(root->right,v);
        
        v.push_back(x+y);
        return max(x,y)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        //if(root->left==NULL && root->right==NULL)return 0;
        
         vector<int>v;
         hot(root,v)+1;
       int ans=INT_MIN;
         for(int i=0; i<v.size(); i++)
         {
             ans= max(ans,v[i]);
         }
        
        
        
        return ans;
        
        
        
    }
};