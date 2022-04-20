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
class BSTIterator {
public:
    stack<TreeNode *>s;
    
    void pushall(TreeNode *node)
    {
        while(node!=NULL)
        {
            s.push(node);
            node=node->left;
        }
    }
    
    BSTIterator(TreeNode* root) 
    {
       pushall(root); 
    }
    
    int next() {
        TreeNode *temp=s.top();
        s.pop();
        pushall(temp->right);
        return temp->val;
        
    }
    
    bool hasNext() {
        if(!s.empty())
        {
            return true;
        }
        else{
            return false;
        }
        
    }
};

//my own solution
// vector<int>v;
//     int i=0;
//     void inorder(TreeNode *root)
//     {
//         if(root==NULL){return;}
        
//         inorder(root->left);
//         v.push_back(root->val);
//         inorder(root->right);
//     }
    
//     BSTIterator(TreeNode* root) 
//     {
//        inorder(root);
//         //->val=INT_MIN;
//     }
    
//     int next() {
//         return v[i++];
        
//     }
    
//     bool hasNext() 
//     {
//         if(i!=v.size())
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
        
//     }

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */

