/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
     bool getpath1(TreeNode * n1, deque<TreeNode *>&v1,TreeNode *p)
     {
       if(n1==NULL)
       {
           return false;
       }
         
         v1.push_back(n1);
         if(n1==p)
         {
             return true;
         }
         
         if(getpath1(n1->left,v1,p)  ||     getpath1(n1->right,v1,p))
         {
             return true;
         }
         else
         {
             v1.pop_back();
             return false;
         }
         
     }
    
    
    bool getpath2(TreeNode * n1, deque<TreeNode *>&v2,TreeNode *q)
     {
       if(n1==NULL)
       {
           return false;
       }
         
         v2.push_back(n1);
         if(n1==q)
         {
             return true;
         }
         
         if(getpath1(n1->left,v2,q)  ||     getpath1(n1->right,v2,q))
         {
             return true;
         }
         else
         {
             v2.pop_back();
             return false;
         }
         
     }
    
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        deque<TreeNode *>v1;
        deque<TreeNode *>v2;
        
        bool a= getpath1(root,v1,p);
        bool b= getpath2(root,v2,q);
        
       
        int i=0;
        int n=v1.size();
        TreeNode * ans;
        
        while(i<n)
        {
             TreeNode *n1=v1.front();
             TreeNode *n2=v2.front();
            if(n1==n2)
            {
               v1.pop_front() ;
                v2.pop_front();
                i++;
                ans= n1;
            }
            
            else
            {
                return ans;
                
            }
            
            
        }
        
        return ans;
        
        
    }
};