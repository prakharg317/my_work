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
    int maxDepth(TreeNode* root) {
        if(root==NULL)return 0;
        queue<pair<TreeNode*,int>>q;
        q.push({root,1});
        
        int maxi=0;
        
        while(!q.empty())
        {
            int n= q.size();
            
            for(int i=0; i<n; i++)
            {
                TreeNode *t=q.front().first;
                int x= q.front().second;
                q.pop();
                
                if(t->left!=NULL)q.push({t->left,x+1});
                if(t->right!=NULL)q.push({t->right,x+1});
                
                maxi= max(maxi,x);
            }
        }
        return maxi;
        
    }
};