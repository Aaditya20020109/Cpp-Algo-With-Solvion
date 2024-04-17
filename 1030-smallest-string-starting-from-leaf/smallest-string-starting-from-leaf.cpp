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
    vector<vector<char>> rootLeafPath;
    vector<char> v;

    void Root_leaf_Path(TreeNode* root)
    {
        if(root == NULL )return ;

        if(root->left == NULL  &&  root->right == NULL)
        {
            v.push_back(root->val + 'a');

            rootLeafPath.push_back(v);

            v.pop_back();

            
            return ;


        }

       
        v.push_back(root->val + 'a');

        Root_leaf_Path(root->left);

           
        Root_leaf_Path(root->right);

        v.pop_back();
       
    }
    string smallestFromLeaf(TreeNode* root) {

        Root_leaf_Path(root);

        vector<string> stringArr;
        for(int i = 0; i < rootLeafPath.size() ; i++)
        {

                vector<char> v_str = rootLeafPath[i];
                string str_1 = "";
                for(int j = v_str.size()-1  ;  j >= 0   ; j--)
                {
                    
                    str_1.push_back(v_str[j]);

                }
                stringArr.push_back(str_1);

        }

        sort(begin(stringArr),end(stringArr));


        return stringArr[0];

        
    }
};