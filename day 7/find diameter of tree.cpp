class Solution {
private:
    int Height(TreeNode* root) {
        if(root==NULL) return 0;
        return max(Height(root->left),Height(root->right))+1;
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL)
        {
            return 0;
        }
        int d1 = diameterOfBinaryTree(root->left);
        int d2 = diameterOfBinaryTree(root->right);
        int d3 = Height(root->left)+Height(root->right);
        return max(d1,max(d2,d3));
    }
};
