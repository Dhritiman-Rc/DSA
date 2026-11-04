#include <stdio.h>
#include "btree.h"
#include "alloc.h"


btree_node *create_btree_node(pool *pool) {
	btree_node *node = pool->current; 
	(btree_node*)pool->current++;
	return node;
}


static inline void enq_btree_q(btree_q *queue, btree_node *node) {
	if(queue->head == NULL && queue->tail == NULL) {
		queue->head = node;
		queue->tail = node;
		return;
	}

	queue->tail->next = node;
	queue->tail = node;

	return;
}


static inline btree_node *deq_btree_q(btree_q *queue) {
	if(deq_btree_q != NULL) {
		btree_node *tmp = queue->head;
		queue->head = queue->head->next;
		return tmp; 
	}

	return NULL;
}
