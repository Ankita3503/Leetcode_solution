void traversal(TreeNode* root ,vector<int> &arr)
{
    if(root==NULL)
    {
        return;
    }
    traversal(root->left ,arr);
    traversal(root->right ,arr);
    arr.push_back(root->val);
}
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        
        vector<int> arr;
         traversal(root,arr);
        return arr;
    }
};
