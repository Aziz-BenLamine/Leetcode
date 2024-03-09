void convertBST(struct TreeNode* root, int* sum){
    if(root == NULL) return;
    
    convertBST(root->right, sum);
    
    //Assign new value
    *sum += root->val;
    root->val = *sum;
    
    convertBST(root->left, sum);
}

struct TreeNode* bstToGst(struct TreeNode* root) {
    int sum = 0;
    convertBST(root, &sum);
    return root;
}
