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
    vector<int> rightSideView(TreeNode* root) {

        vector<int> result;

        if( !root )
        return result;

        queue<pair<TreeNode*,int>> q;
        q.push({root,0});

        map<int,int> mpp;

        while( !q.empty() )
        {
          auto curr = q.front();
          q.pop();

          TreeNode *node = curr.first;
          int level = curr.second;

          mpp[level] = (node -> val);

          if(  node -> left )
          q.push({node -> left , level + 1});

          if( node -> right )
          q.push({node -> right , level + 1});

        }

        for( auto it : mpp )
        result.push_back(it.second);

        return result;
        
    }
};
