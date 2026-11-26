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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root!=nullptr){
            if(val>root->val){
                if(root->right) root->right=insertIntoBST(root->right,val);
                else {
                    TreeNode* temp=new TreeNode(val);
                    root->right=temp;
                }
            }
            if(val<root->val){
                if(root->left) root->left=insertIntoBST(root->left,val);
                else {
                    TreeNode* temp=new TreeNode(val);
                    root->left=temp;
                }
            }
        }
        else{
            TreeNode* temp=new TreeNode(val);
            return temp;
        }
        return root;
    }
};