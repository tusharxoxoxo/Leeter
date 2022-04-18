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
    set <int> s;
    void fun(TreeNode* root){
        if(root == NULL) return;
        
        fun(root -> left);
        fun(root -> right);
        s.insert(root -> val);
        
        
    }
   
    
    
    
    int kthSmallest(TreeNode* root, int k) {
       // set <int> s;
        
        fun(root);
        
        auto it = s.begin();
    for (int i = 0; i < k - 1; i++)
        it++;
    return *it;
    }
};