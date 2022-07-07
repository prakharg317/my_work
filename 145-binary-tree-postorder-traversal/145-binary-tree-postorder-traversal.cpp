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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        if(root==NULL)return ans;
        stack<TreeNode *>s;
        s.push(root);
        
        stack<TreeNode *>s1;
        
        while(!s.empty())
        {
            TreeNode *cur=s.top();
            s.pop();
            s1.push(cur);
            
            if(cur->left!=NULL)
            {
                s.push(cur->left);
            }
            if(cur->right!=NULL)
            {
                s.push(cur->right);
            }
        }
        
        while(!s1.empty())
        {
            ans.push_back(s1.top()->val);
            s1.pop();
        }
        
        return ans;
        
    }
};