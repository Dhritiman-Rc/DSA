#include <stdio.h>
#include <stdlib.h>


typedef struct tree_node{
	int val;
	int height;
	struct tree_node *left;
	struct tree_node *right;
}tree_node;


tree_node *new_tree_node(int i) {
	tree_node *node = calloc(1, sizeof(tree_node));
	node->val = i;
	return node;
}

int main() {
	tree_node *n1 = new_tree_node(1);
	tree_node *n2 = new_tree_node(2);
	tree_node *n3 = new_tree_node(3);
	tree_node *n4 = new_tree_node(4);
	tree_node *n5 = new_tree_node(5);


	n1->left = n2;
	n1->right = n3;
	n2->left = n4;
	n2->right = n5;


	free(n1);
	free(n2);
	free(n3);
	free(n4);
	free(n5);
}
