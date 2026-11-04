#include "btree.h"
#include "alloc.h"

pool global_pool;

static inline int *lot(btree_node *root) { 
	btree_q queue;

}



int main() {

	alloc_pool(&global_pool);
	btree_node *n1 = create_btree_node(&global_pool);
	btree_node *n2 = create_btree_node(&global_pool);
	btree_node *n3 = create_btree_node(&global_pool);
	btree_node *n4 = create_btree_node(&global_pool);
	btree_node *n5 = create_btree_node(&global_pool);


	n1->val = 1;
	n2->val = 2;
	n3->val = 3;
	n4->val = 4;
	n5->val = 5;
	
	n1->child_left = n2;
	n1->child_right = n3;
	n2->child_left = n4;
	n2->child_right = n5;

	
	lot(n1);

	free_pool(&global_pool);	
	return 0; 
}
