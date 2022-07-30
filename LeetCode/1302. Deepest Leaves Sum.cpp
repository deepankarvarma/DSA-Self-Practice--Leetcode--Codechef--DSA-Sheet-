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
    int deepestLeavesSum(TreeNode* root) {
        if(root==NULL)
            return 0;
        int sum=0;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            sum=0;
             int n=q.size();
            for(int i=0;i<n;i++){
                TreeNode* front=q.front();
                q.pop();
                sum+=front->val;
                if(front->left)q.push(front->left);
                if(front->right)q.push(front->right);
            }
        }
        return sum;
    }
    
};