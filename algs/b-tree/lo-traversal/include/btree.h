#ifndef BTREE_H
#define BTREE_H

#include "alloc.h"


/*
 * Every node in the binary tree can also be put in a linked list 
 * regaurdless the node in the tree or not, by doing this we can 
 * impliment a queue which would help us write the level order 
 * traversal, which is an implimentation of breadth first search 
 * in a binary tree.
 * */



typedef struct btree_node {

	struct btree_node *child_left;
	struct btree_node *child_right;

	/*
	 * Linked list support:
	 * */
	struct btree_node *next;
	int val;

}btree_node;



typedef struct {
	
	/* 
	 * every node in the binary tree supports the queue regarudless WETHER THE
	 * NODE IS INSIDE THE TREE or NOT.
	 * */

	struct btree_node *head;
	struct btree_node *tail; 
	
	int size; // The size of the queue

}btree_q;


btree_q *new_btree_queue(pool *pool);               // Allocate a new queue in the global allocator.
static inline void enq_btree_q(btree_q *queue, btree_node *node); // Enqueue with a value at the tail.
static inline btree_node *deq_btree_q(btree_q *queue);	          // Deque the head node and return the node. 
btree_node *create_btree_node(pool *pool);	  // Create the binarry tree node

#endif
