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
    void MakeString(TreeNode* root,vector<int>& v)
    {
        if(root==NULL)return;
        if(root->left==NULL && root->right==NULL)
        {
            v.push_back(root->val);

        }
        MakeString(root->left,v);
        MakeString(root->right,v);

    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> s;
        vector<int> t;
        MakeString(root1,s);
        MakeString(root2,t);
        if(s.size()!=t.size())return false;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=t[i])return false;
        }
        return true;
        
    }
};