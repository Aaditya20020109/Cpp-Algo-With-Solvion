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
 int helper(TreeNode* root , int& maxDepth , int depth)
    {
        if(root == NULL)
        {
            maxDepth = max(depth-1 , maxDepth);
            return maxDepth;

        }

        int d1 = helper(root->left , maxDepth , depth+1);
        int d2 = helper(root->right , maxDepth , depth+1);

        return maxDepth = max(d1 , d2);
    }
    void Traversal(vector<int>& v , TreeNode* root , int level)
    {
        if(root == NULL)return;
        int index = level ;
        v[index] = max(v[index] , root->val);
        Traversal(v, root->left , level+1);
        Traversal(v, root->right , level+1);



    }
    vector<int> largestValues(TreeNode* root) {

        int rowCount = 0;
        rowCount = helper(root , rowCount , 1);
        cout<<rowCount<<endl;

        vector<int> res(rowCount , INT_MIN);
        Traversal(res , root ,0 );


        return res;



        
    }
};