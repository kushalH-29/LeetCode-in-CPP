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
    int findheight(TreeNode* root,int& diameter){
        if(root == nullptr){
            return 0;
        }

        int leftheight = findheight(root->left,diameter);

        int rightheight = findheight(root->right,diameter);

        diameter = max(diameter,leftheight+rightheight);

        return 1 + max(leftheight,rightheight);
    }
    
public:
    int diameterOfBinaryTree(TreeNode* root) {
       int diameter = 0;
       findheight(root,diameter);
       return diameter; 
    }
};