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
    vector<vector<int>> rootLeafPath;
    vector<int> v;

    int sum_Num(vector<int> v_1)
    {
        int power = 0;

        int ans = 0;

        for(int i=v_1.size()-1 ;i>=0 ; i--)
        {

            ans += (v_1[i] * pow(10,power++)) ;

           
        }

        return ans;



    }


    void Root_leaf_Path(TreeNode* root)
    {
         if(root == NULL )return ;
        if(root->left == NULL && root->right == NULL)
        {
            v.push_back(root->val);
            rootLeafPath.push_back(v);
            v.pop_back();

            
            return ;


        }

       
        v.push_back(root->val);
        Root_leaf_Path(root->left);

           
        Root_leaf_Path(root->right);

        v.pop_back();
       
    }
    int sumNumbers(TreeNode* root) {

       Root_leaf_Path(root) ; 

        int ans = 0;

       for(int i=0;i<rootLeafPath.size();i++)
       {

        vector<int> v_1 = rootLeafPath[i];
        ans += sum_Num(v_1);

       }

        return ans;
        

    }
};