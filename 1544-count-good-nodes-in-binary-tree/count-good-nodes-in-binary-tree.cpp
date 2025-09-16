
class Solution {
public:
   int helper(TreeNode* node,int curmax)
   {
    if(node==nullptr)
    {
        return 0;
    }
    int ans=0;
    if(node->val >= curmax)
    {
        ans=1;
        curmax=node->val;
    }

    return ans+helper(node->right,curmax)+helper(node->left,curmax);
   }

   int goodNodes(TreeNode* root) {
   return helper(root,INT_MIN);
    }
};