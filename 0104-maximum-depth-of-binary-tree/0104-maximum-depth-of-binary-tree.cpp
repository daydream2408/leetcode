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
    int maxDepth(TreeNode* root) {
       vector<vector<int>> ans;
        if(root==NULL)return 0;
       // TreeNode* node =root;
         queue<TreeNode*>st;
         st.push(root);

        while(!st.empty()){
          int size=st.size();
          vector<int>level;

          for(int i=0; i<size; i++){
            TreeNode*front=st.front();
            
            st.pop();

            if(front->left!=NULL) st.push(front->left);
            if(front->right!=nullptr) st.push(front->right);
            level.push_back(front->val);
          }
          ans.push_back(level);
        }
        return ans.size();
    }
};