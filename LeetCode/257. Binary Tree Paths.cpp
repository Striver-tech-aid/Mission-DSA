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
private:
    void getPath(TreeNode *root, string path, vector<string> &result)
    {
        if (!root) return;

        if (!path.empty())
        {
            path += "->";
        }

        path += to_string(root->val);

        if (!root->left && !root->right)
        {
            result.push_back(path);
        }
        
        else
        {
            getPath(root->left, path, result);
            getPath(root->right, path, result);
        }
    }

public:
    vector<string> binaryTreePaths(TreeNode* root) {

        vector<string> result;

        getPath(root, "", result);
        
        return result;
    }
};
