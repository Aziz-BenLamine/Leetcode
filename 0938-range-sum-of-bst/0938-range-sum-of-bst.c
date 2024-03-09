/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int rangeSumBST(struct TreeNode* root, int low, int high) {
    if(root == NULL){
        return 0;
    }
    struct TreeNode *node = root;
    if(node->val >= low && node->val <= high){
        return node->val + rangeSumBST(root->right, low, high) + rangeSumBST(root->left, low, high);
    }
    if(root->val < low){
        return rangeSumBST(root->right,low,high);
    }
    if(root->val > high){
        return rangeSumBST(root->left,low,high);
    }
    return 0;
}