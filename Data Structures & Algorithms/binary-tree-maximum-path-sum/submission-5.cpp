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
int ans=INT_MIN;
    int maxsum(TreeNode*root){
        if(!root)return 0;
        int left=max(0,maxsum(root->left));
        int right=max(0,maxsum(root->right));

        ans= max(ans,left+right+root->val); 

        return root->val + max(right,left);
    }

    int maxPathSum(TreeNode* root) {

        return max(maxsum(root),ans);
    }
};
