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
    vector<int> rightSideView(TreeNode* root) {
        queue<TreeNode*>q;
        vector<int>result;
        q.push(root);

        if(root==nullptr)return result;

        while(!q.empty()){
            int size=q.size();
            for(int i=0;i<size;i++){
                TreeNode* front=q.front();
                q.pop();

                if (i==0)result.push_back(front->val);

                if(front->right)q.push(front->right);
                if(front->left)q.push(front->left);
            }
        }
        return result;
    }
};
