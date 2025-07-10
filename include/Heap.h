#ifndef HEAP_H
#define HEAP_H

#include <stddef.h>

// Heap implementation
void* my_alloc(size_t size);
void my_dealloc(void* address);

// malloc strategies
void* first_fit(size_t size);
void* best_fit(size_t size);
void* worst_fit(size_t size);
void* buddy(size_t size);

// Free list implementation
typedef struct Node
{
	struct Node* prev;
	struct Node* next;
	void* address;
	size_t size;
} node_t;

struct FreeList
{
	node_t* head;
	node_t* tail;
};

struct FreeList* init_free_list(void* heap, size_t heap_size);


#endif
