* Free list to track free portions of memory
    - Doubly linked list that is in order from lowest-highest free memory addresses
    - Needed functionality: Split a free space when allocating new memory and merge adjacent free spaces when 
        freeing memory
    - Typical flow:
        * Initialize free list on startup, the only node will contain the heap start address and heap size
        * On allocation: malloc function provides the free list node to put the memory (location is based on malloc strategy)
            split the node into two nodes, first node is any space from prev to curr, 
            second node is from (curr + allocation size) to next.


* Ability to change what malloc strategy is used
* Measure performance of allocation
* First-fit, best-fit, worst-fit, buddy allocation strategies
* Visualize memory structure in terminal
