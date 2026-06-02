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
    void traversal(TreeNode* root, priority_queue<int,vector<int>> &heap){
        if(root==nullptr)return;
        heap.push(root->val);
        traversal(root->left,heap);
        traversal(root->right,heap);
    }
    int kthSmallest(TreeNode* root, int k) {
        priority_queue<int,vector<int>> heap;
        traversal(root,heap);

        while(heap.size()>k)heap.pop();
        return heap.top();
    }
};
