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
int solve(TreeNode* root, int &res){
    if(!root) return 0;
    
    int l = solve(root -> left, res);
    int r = solve(root -> right, res);
    res = max(res, l + r);
    return 1 + max(l, r);
}

class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int res = 0;
        solve(root, res);
        return res;
    }
};

