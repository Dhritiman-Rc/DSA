#ifndef ALLOC_H
#define ALLOC_H

#include <stdlib.h>
#include <stdio.h>


#define ALLOC_SIZE 1000 // 1 Kilo byte


typedef struct pool{

	void *pool;
	void *current;

}pool; 


inline void alloc_pool(pool *make_alc) {
	make_alc->pool = malloc(ALLOC_SIZE);
	make_alc->current = make_alc->pool;
	return; 
}



inline void free_pool(pool *pool) {
	free(pool->pool);
	return;
}
#endif
