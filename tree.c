#include <stdio.h>
#include <stdlib.h>

struct TreeNode {            
   int val;                
   struct TreeNode *left;
   struct TreeNode *right;
};
typedef struct TreeNode TreeNode;

int add(TreeNode **root,int val);
int print(TreeNode *root);

int add(TreeNode **root,int val) {
	if (root == NULL) {
		return -1;
	}
	if (*root == NULL) {
		(*root) = (TreeNode *)malloc(sizeof(TreeNode));
		(*root) -> val = val;
		(*root) -> left = NULL;
		(*root) -> right = NULL;
		return 0;
	}
	else {
		if (((*root)->val) > val) {
			return add(&((*root)->left),val);
		}
		else if (((*root)->val) < val) {
			return add(&((*root)->right),val);
		}
		else {
			return 0;
		}
	}
}

int print(TreeNode *root) {
	if (root == NULL) {
		return 0;
	}
	print(root->left);
	printf("val = %d\n",root->val);
	print(root->right);
	
}


	
