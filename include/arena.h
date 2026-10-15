#ifndef ARENA_H
#define ARENA_H

/*
 * @brief: Arena API for dynamic allocations.
 * */

#include <stdio.h>
#include <stdlib.h>



/* @type: data
 * @brief: Main allocation for suballocations
 *
 * @ *alc: Stored adress returned from malloc()
 * @ *cp: Current pointer
 * @ *next: Next pointer in the array 
 * @ size: Size of the allocation
 * */
typedef struct {
	void *alc;
	void *cp;
	void *next;
	size_t size;
}arena;

/* @type: data
 * @brief: suballocation from the main allocation
 *
 * @ *alc: subalocation pointer returned from arena_alloc()
 * @ *cp: current pointer
 * */
typedef struct {
	void *alc;
	void *cp;
}chunk;

/* @type: function
 * @brief: given a size in bytes allocate the main allocation.
 *
 * @args:
 * 	@ *arena: arena instance input from user
 * */
int arena_alloc(arena *arena) {
	arena->alc=malloc(arena->size);
	arena->current = arena->alc;
	return 0;
}

/* @type: function
 * @brief: allocates a suballocation in the main allocation
 *
 * @args:
 * 	@ *arena: arena insstance input from user
 * 	@ *chunk: allocation of suballocation
 * 	@ size: the size of the chunk allocated.
 *
 * */
int arena_new_chunk(arena *arena, chunk *chunk, size_t size) {
	if((char*)arena->current + size >= (char*)arena->alc + arena->size) {
		printf("Creating new arena!, no space left in current.");
		return 20;
	}
	return 0;
}

/* @type: function
 * @breif: free the arena, if there is allocation recursivley, free them.
 *
 *
 * */
int arena_free(arena *arena) {
	if(arena->alc == NULL || arena->current == NULL) {
		printf("Memory arena freed OR CORRUPTED DO NOT REUSE ARENA INSTANCE! \n");
	}

	if(arena->next != NULL) {
		arena_free(arena->next);
	}

	free(arena->alc);
	arena->alc = NULL;
	arena->current = NULL;
	return 0;
}

#endif
