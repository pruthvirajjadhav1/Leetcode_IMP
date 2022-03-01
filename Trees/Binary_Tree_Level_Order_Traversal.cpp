// https://leetcode.com/explore/learn/card/data-structure-tree/134/traverse-a-tree/931/

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
        vector<vector<int>> ans;
        if(root==NULL){
            return ans;
        }
        
        queue<TreeNode*>q;
        q.push(root);
        
        while(!q.empty()){
            int size=q.size();
            vector<int>level;
            for(int i=0;i<size;i++){
                TreeNode* temp=q.front();
                q.pop();
                if(temp->left!=NULL)
                    q.push(temp->left);
                if(temp->right!=NULL)
                    q.push(temp->right);
                level.push_back(temp->val);
            }
            ans.push_back(level);
        }
        return ans;
    }
};

// class Solution
// {
//     public:
//     //Function to return the level order traversal of a tree.
//     vector<int> levelOrder(Node* node)
//     {
//       vector<int> ans;
//       queue<Node*> q;
//       q.push(node);
      
//       while(!q.empty()){
//           Node* curr = q.front();
//           q.pop();
//           ans.push_back(curr->data);
          
//           if(curr->left != NULL){
//               q.push(curr->left);
//           }
          
//           if(curr->right != NULL){
//               q.push(curr->right);
//           }
//       }
      
//       return ans;
//     }
// };