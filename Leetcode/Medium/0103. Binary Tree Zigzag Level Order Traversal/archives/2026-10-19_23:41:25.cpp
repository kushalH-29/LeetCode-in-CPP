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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(root == NULL){
            return result;
        }
        queue<TreeNode*> NodesQueues;
        NodesQueues.push(root);
        bool leftToRight = true;

        while(!NodesQueues.empty()){
            int size = NodesQueues.size();
            vector<int> row(size);
            for(int i=0; i<row.size(); i++){
                TreeNode* Node = NodesQueues.front();
                NodesQueues.pop();

                int index = (leftToRight)?i:(size-1-i);
                row[index] = Node->val;
                if(Node->left){
                    NodesQueues.push(Node->left);
                }
                if(Node->right){
                    NodesQueues.push(Node->right);
                }
            }

        leftToRight = !leftToRight;
            result.push_back(row);
        }
        return result;
    }
};