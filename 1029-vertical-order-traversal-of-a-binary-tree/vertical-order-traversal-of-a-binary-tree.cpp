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


   void fillingvector(TreeNode* root,int i,int j,vector<array<int,3>>&ans)
   {
    if(!root) return;

    ans.push_back({i,j,root->val});

    if(root->left!=nullptr)
    fillingvector(root->left,i-1,j+1,ans);
    if(root->right!=nullptr)
    fillingvector(root->right,i+1,j+1,ans);
   }

  
    vector<vector<int>> verticalTraversal(TreeNode* root) {
         vector<array<int,3>> ans;
        
        fillingvector(root,0,0,ans);

        sort(ans.begin(),ans.end(),[] (auto &a,auto &b)
        { 
            if(a[0]!=b[0])
            return a[0]<b[0];

            if(a[1]!=b[1])
            return a[1]<b[1];

            return a[2]<b[2];
        });

        vector<vector<int>>finalans;
        if(ans.empty())
        return finalans;

        int currcol=ans[0][0];
        vector<int>current_col_nodes;

        for(auto &node:ans)
        {
            if(node[0]==currcol)
            {
                current_col_nodes.push_back(node[2]);
            }
            else
            {
                finalans.push_back(current_col_nodes);
                current_col_nodes={node[2]};
                currcol=node[0];
            }
        }
        finalans.push_back(current_col_nodes);

        return finalans;

        

    }
};