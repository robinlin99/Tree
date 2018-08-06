#include <stdio.h>
#include "tree.c"
int main(void) {
	TreeNode *root = NULL;
	int r=0;
   	int i=0;

	printf("Tree A\n");
	r=add(&root,900);
	r=add(&root,300);
	r=add(&root,600);
	r=add(&root,1000);
	r=add(&root,20000);
   	r=print(root);
	return 0;
} 
	

	
