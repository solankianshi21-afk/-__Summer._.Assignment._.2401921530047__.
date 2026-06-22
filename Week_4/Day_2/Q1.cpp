class Solution {
public:
    void func(TreeNode* Node, vector<int>& ans) {
        if(Node == nullptr) {
            return;
        }
        func(Node->left, ans);
        ans.push_back(Node->val);
        func(Node->right, ans);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        func(root, ans);
        return ans;
    }
};
