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
    bool validBST( TreeNode *root , long minRange , long maxRange )
    {
        if( root == nullptr )
        return true;

        if( root -> val <= minRange  || root -> val >= maxRange )
        return false;

        bool leftCheck = validBST(root -> left , minRange , root -> val);
        bool rightCheck = validBST(root -> right , root -> val , maxRange);

        return leftCheck && rightCheck;
    }
public:
    bool isValidBST(TreeNode* root) {

        return validBST(root , LONG_MIN , LONG_MAX );
        
    }
};
