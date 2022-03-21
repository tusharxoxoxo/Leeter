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
    
    TreeNode* Old;
    char Madarchodh = 'x'; 
    
    TreeNode* position69(TreeNode* root, int fart)
    {
            if(root == NULL) return Old;
        
            if(root -> val > fart) {Old = root; Madarchodh = 'l'; position69(root -> left, fart);}
            
            else {Old = root; Madarchodh = 'r'; position69(root -> right, fart);}
        
            return NULL;
    }
    
    TreeNode* insertIntoBST(TreeNode* root, int val) 
    {
        TreeNode* newnode = new TreeNode(val);
    
            if(root == NULL) return newnode; 
        
                TreeNode* answer = root;
    
                    TreeNode* shark = position69(root, val);
        
                        if(Madarchodh == 'l') Old -> left = newnode;
                        
                            else Old -> right = newnode;
        
        return answer;
    }
};