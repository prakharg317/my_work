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
    int hot(TreeNode *root, int &ans)
    {
        if(root==NULL)return 0;
        
        int x= hot(root->left,ans);
        int y= hot(root->right,ans);
        
        ans= max(ans, x+y);
        return max(x,y)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        //if(root->left==NULL && root->right==NULL)return 0;
        
         vector<int>v;
        int ans=0;      
        hot(root,ans);
        
        
        
        return ans;
        
        
        
    }
};