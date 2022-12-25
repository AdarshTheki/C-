## Stack vs Heap Memory Allocation:

**Stack Allocation:**

 The allocation happens on contiguous blocks of memory. We call it a stack memory allocation because the allocation happens in the function call stack. The size of memory to be allocated is known to the compiler and whenever a function is called, its variables get memory allocated on the stack. And whenever the function call is over, the memory for the variables is de-allocated. This all happens using some predefined routines in the compiler. A programmer does not have to worry about memory allocation and de-allocation of stack variables. This kind of memory allocation is also known as Temporary memory allocation because as soon as the method finishes its execution all the data belonging to that method flushes out from the stack automatically. This means any value stored in the stack memory scheme is accessible as long as the method hasn’t completed its execution and is currently in a running state.

 **Heap Allocation:** 
 
 The memory is allocated during the execution of instructions written by programmers. Note that the name heap has nothing to do with the heap data structure. It is called a heap because it is a pile of memory space available to programmers to allocate and de-allocate. Every time when we made an object it always creates in Heap-space and the referencing information to these objects is always stored in Stack-memory. Heap memory allocation isn’t as safe as Stack memory allocation because the data stored in this space is accessible or visible to all threads. If a programmer does not handle this memory well, a memory leak can happen in the program.

**Key Differences: Stack vs Heap**

The tabular representation is given below lists key differences between Stack and Heap.

**Stack Memory**

- This memory space stores static variables.
- When allotted (by OS) stack memory gets filled, Stack Overflow error occurs.
- Data saved on the stack can only be accessed by the owner thread, making it safer.
- Stack frame access is easier.
- Potential threat: Shortage of memory.
- The excellent locality of reference.
- Access time is much faster than Heap memory.

**Heap Memory:**

- This memory space stores dynamic variables.
- When allocated (by OS) heap memory gets filled, Heap Overflow error occurs.
- Heap memory is not safest as data stored in Heap-memory is visible to all threads.
- Heap frame access is difficult.
- Potential threat: Memory Fragmentation.
- The adequate locality of reference.
- Access time is much slower than the stack memory.

**Conclusion:**
In this stack vs heap memory allocation tutorial, you explored the differences between stack and heap memory space. You discovered how both these memory areas work. Following this, you looked into the stack overflow and heap overflow errors in programming. In the end, you also listed a few key differences between stack and heap memory.

If you are seeking for more comprehensive learning which goes beyond data structures and encompasses the fundamentals of interactive application development, Simplilearn’s Full Stack Java Developer Master’s program will be precisely suited to you. The courses in the above catalogue can build your chances of getting into a software developer role by assisting you in mastering the craft of software development. So, explore now and get started!

Have any questions about this tutorial on the Stack vs Heap Memory Allocation? If yes, please leave them in the comments section at the bottom of this page; we will respond to them soon!
