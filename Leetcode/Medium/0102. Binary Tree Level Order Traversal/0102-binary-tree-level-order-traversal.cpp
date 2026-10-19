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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector <int>> result;
        if(root == nullptr){
            return result;
        }

        queue<TreeNode*> NodesQueue;
        NodesQueue.push(root);
        while(!NodesQueue.empty()){
            int size = NodesQueue.size();
            vector<int> row(size);

            for(int i=0; i<size; i++){
                TreeNode* Node = NodesQueue.front();
                NodesQueue.pop();

                row[i] = Node->val;
                if(Node->left){
                    NodesQueue.push(Node->left);
                }
                if(Node->right){
                    NodesQueue.push(Node->right);
                }
            }
            result.push_back(row);
        }
        return result;
    }
};