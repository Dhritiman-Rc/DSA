#include <stdio.h>
#include <stdlib.h>


typedef struct node {
	int val;
	struct node *next;
}node;

typedef struct {
	node *head;
	node *tail;
	int size;
}queue;


queue *new_q() {
	queue *q1 = (queue*)malloc(sizeof(queue));
	return q1;
}

void en_q(queue *queue, int num) {
	node *tmp = malloc(sizeof(node));
	tmp->val = num;

	if(queue->head == NULL && queue->tail == NULL) {
		queue->head = tmp;
		queue->tail = tmp;
		return;
	}
	else {
		queue->tail->next = tmp; 
		queue->tail = tmp;
		return;
	}

}


void de_q(queue *queue) {
	 node *tmp = queue->head->next;
	 if(queue->head != NULL) {
		free(queue->head);
		queue->head = tmp;
	 }
	 return;
}



void del_q(queue *queue) {
	while(queue->head != NULL) {
		node *tmp = queue->head->next;
		free(queue->head);
		queue->head = tmp;
	}
	return;
}

int main() {
	queue *new = new_q();
	en_q(new, 2);
	en_q(new, 3);

	de_q(new);
	de_q(new);

	del_q(new);
	return 0;
}
