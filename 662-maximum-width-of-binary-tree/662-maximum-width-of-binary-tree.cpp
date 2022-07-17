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
        // if(root->left==NULL  && root->right==NULL)return 1;
        // if(root->left==NULL  && root->right!=NULL)return 1;
        // if(root->left!=NULL  && root->right==NULL)return 1;
        
       
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});
        int left,right;
        vector<int>l;
        int maxi=0;
         //cout<<l.size();
        while(!q.empty())
        {
           int n=q.size();
            l.clear();
            for(int i=0; i<n; i++)
            {
                TreeNode *t=q.front().first;
                int x= q.front().second;
                q.pop();
                if(t->left!=NULL)q.push({t->left, (unsigned long long int) 2*x+1});
                if(t->right!=NULL)q.push({t->right,(unsigned long long int) 2*x+2});
                l.push_back(x);
            }
           
            // for(int i=0; i<l.size(); i++)
            // {
            //     cout<<l[i]<<" ";
            // }
            // cout<<endl;
           // l.clear();
            
               maxi= max(maxi, l[l.size()-1]-l[0]+1); 
            
            
        }
        
        
        return maxi;
        
    }
};