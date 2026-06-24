class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int dia = 0;
        height(root, dia);
        return dia;
        
    }
private:
    int height(TreeNode* node, int& dia) {
        if(!node) {
            return 0;
        }
        int lh = height(node->left, dia);
        int rh = height(node->right, dia);
        dia = max(dia, lh + rh);
        return 1 + max(lh , rh);
    }
};
