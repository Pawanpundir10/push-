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
    bool isBalanced(TreeNode* root) {
       return height(root)!=-1; 
    }

    private:
    int height(TreeNode* node)
    {
        if(node==nullptr) return 0;

        int lh=height(node->left);
        int rh=height(node->right);
        if(lh==-1 || rh==-1 || abs(lh-rh)>1 )
        {
            return -1;
        }

        return max(lh,rh)+1;
    }
};