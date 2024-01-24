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
    int count =0;
    void traversal(TreeNode* root,vector<int> freq)
    {
        if(root==NULL)
        {
            
            return ;
        }
       
        freq[root->val]++;
         if(root->left==NULL && root->right==NULL)
        {
            int c =0;
            
            for(int &e:freq)
            {
                if(e%2!=0)c++;
            }
            if(c<=1)count++;
        }
        traversal(root->left,freq);
        traversal(root->right,freq);
        freq[root->val]--;
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        vector<int> freq(10);
        traversal(root,freq);
        return count;
    }
};