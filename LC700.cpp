 class solution{
    public: 
    TreeNode* searchBST(TreeNode* root,int val){
      if(root==NULL){
    return NULL;
      }
    if(root -> val == val){
    return root;
    }
if(val<root->val){
 return searchBST(root->left, val);
        }

        // Step 4: Search in right subtree
        else {
            return searchBST(root->right, val);
        }
    }
};
