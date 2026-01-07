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

   long long total=0;
   long long ans=0;
   long long MOD=1e9+7;

   long long totalsum(TreeNode* root)
   {
    if(!root) return 0;
    return root->val + totalsum(root->left)+ totalsum(root->right);
   }

   long long subtreesum(TreeNode* root)
   {
        if(!root) return 0;

        long long left = subtreesum(root->left);
        long long right = subtreesum(root->right);
        
        long long subsum= root->val + left+ right;
         
        ans=max(ans,subsum * (total-subsum));

        return subsum;


   }
  


    int maxProduct(TreeNode* root) {

        total=totalsum(root);
        subtreesum(root);
        return ans%MOD;
        
    }
};