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
    bool isbst(TreeNode* root,int low, int high){
        if(!root)return true;

        if(root->val>=high || root->val<=low)return false;

        bool leftans=isbst(root->left,low,root->val);
        bool rightans= isbst(root->right,root->val,high);

        return leftans && rightans;   
    }


    bool isValidBST(TreeNode* root) {
       return isbst(root,INT_MIN,INT_MAX);

    }
};
