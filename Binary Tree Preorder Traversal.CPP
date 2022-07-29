#include<vector>
void traversal(TreeNode* root ,vector<int> &ans)
{
     if(root==NULL)
        {
            return ;
        }
       
        ans.push_back(root->val);
        traversal(root->left,ans);
         traversal(root->right,ans);
    
}
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root)
    {
        vector<int>ans;
         traversal(root,ans);
        
        return ans;
    }
};
