#include <stdio.h>
#include <sys/mman.h>
#include <stdlib.h>

#define HEAP_SIZE 1024


int main(void)
{
	void* heap = mmap(NULL, HEAP_SIZE, PROT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);

	if (heap == MAP_FAILED)
	{
		fprintf(stderr, "heap mapping failed\n");
		exit(-1);
	}

	

	return 0;
}
