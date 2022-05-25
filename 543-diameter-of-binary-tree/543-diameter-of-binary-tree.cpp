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
// int solve(TreeNode* root, int &res){
//     if(root == NULL) return 0;
    
//     int l = solve(root -> left, res);
//     int r = solve(root -> right, res);
    
//     // int temp = max(l, r) + 1;
//     // int ans = max(temp, 1 + l + r);
//     // res = max(temp, 1 + l + r);
//     res = max(res, l + r);
//     return max(l, r) + 1;
    
//       // return temp;
// }
// class Solution {
// public:
//     int diameterOfBinaryTree(TreeNode* root) {
        
//         int res = INT_MIN;
//         res = solve(root, res);
//         //  if(res == 2) return 1;
//         // if(res == 1) return 0;
//         return res;
//     }
// };

class Solution {
public:
	int solve(TreeNode* root, int &maxi){
		if(!root)
			return 0;
		int lh = solve(root->left, maxi);
		int rh = solve(root->right, maxi);
		maxi = max(maxi, lh+rh);
		return 1 + max(lh, rh);
	}

	int diameterOfBinaryTree(TreeNode* root) {
		int maxi = 0;
		solve(root, maxi);
		return maxi;
	}
};