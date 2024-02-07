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
int len;
    int getLen(TreeNode* root,int data)
    {
        if(root==NULL)return 0;
        int left = getLen(root->left,root->val);
        int right = getLen(root->right,root->val);
        len = max(len,left+right);
        if(data==root->val)return max(left,right)+1;
        return 0;

    }
    int longestUnivaluePath(TreeNode* root) {
        if(root==NULL)return 0;
        len =0;
        getLen(root,root->val);
        return len;
        
    }
};