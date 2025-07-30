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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==nullptr)
        {
            return nullptr;
        }

        if(root==p || root==q)
        {
            return root;
        }

        TreeNode* Leftlcs=lowestCommonAncestor(root->left,p,q);
        TreeNode* Rightlcs=lowestCommonAncestor(root->right,p,q);

        if(Leftlcs!=nullptr && Rightlcs!=nullptr)
        {
            return root;
        }
        else if(Leftlcs!=nullptr)
        {
            return Leftlcs;
        }
        else if(Rightlcs!=nullptr)
        {
            return Rightlcs;
        }

        return nullptr;
    }
};