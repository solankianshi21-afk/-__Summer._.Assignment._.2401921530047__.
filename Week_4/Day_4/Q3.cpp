class Solution {
public:
    int maxPathSum(TreeNode* root) {
        int maxi = INT_MIN;
        maxPathdown(root, maxi);
        return maxi;
    }
private:
    int maxPathdown(TreeNode* root, int &maxi) {
        if(root == nullptr) {
            return 0;
        }
        int left = max(0, maxPathdown(root->left, maxi));
        int right = max(0, maxPathdown(root->right, maxi));
        maxi = max(maxi, left+right+root->val);
        return max(left, right) + root->val;
    }
};
