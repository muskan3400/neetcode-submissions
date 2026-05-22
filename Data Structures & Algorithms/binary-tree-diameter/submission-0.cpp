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
    int diameterOfBinaryTree(TreeNode* root) {
        return diameter(root).second;
    }

    pair<int,int> diameter(TreeNode* root){
        if(root==nullptr){
            return {0,0};
        }
        pair<int,int>leftans=diameter(root->left);
        pair<int,int>rightans=diameter(root->right);

        int current_height = max(leftans.first, rightans.first) + 1;
        int current_diameter = max({leftans.second, rightans.second, leftans.first + rightans.first});

        return {current_height, current_diameter};
    }
};
