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
    bool isSymmetric(TreeNode* root) {
        if(root==NULL)return false;
        //else return true;
        bool x=(Symmetric(root->right,root->left));
       
        return x;
    }
    bool Symmetric(TreeNode* root1,TreeNode* root2)
    {
        if(root1!=NULL && root2!=NULL)
        {
            if(root1->val==root2->val)
            {
                return Symmetric(root2->right,root1->left) && Symmetric(root1->right,root2->left);
            }
            else return false;
        }
        else if(root1==NULL && root2==NULL) return true;
         return false;
    }

};
