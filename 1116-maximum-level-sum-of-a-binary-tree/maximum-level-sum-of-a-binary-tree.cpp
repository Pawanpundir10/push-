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
    int maxLevelSum(TreeNode* root) {
       
        if(!root)
        {
            return 0;
        }
        queue<TreeNode*>a;
        a.push(root);
        int maxsum=INT_MIN;
        int maxlevel=1;
        int currentlevel=1;
        while(!a.empty())
        {
            int n=a.size();
            vector<int>level;
            for(int i=0;i<n;i++)
            {
            TreeNode* temp=a.front();
            a.pop();
            if(temp->left != nullptr)
            {
                a.push(temp->left);
            }
            if(temp->right != nullptr)
            {
                a.push(temp->right);
            }
            level.push_back(temp->val);
            }

            int sum=accumulate(level.begin(), level.end(), 1);
            if(sum>maxsum)
            {
                maxsum=sum;
                maxlevel=currentlevel;
            }
            currentlevel++;

        }

        return maxlevel;
    }

};