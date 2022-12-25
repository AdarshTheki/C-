## Recursion C++:-

When function is called within the same function, it is known as recursion in C++. The function which calls the same function, is known as recursive function. A function that calls itself, and doesn't perform any task after function call, is known as tail recursion.

We can understand the above program of recursive method call by the figure given below:

    return 5 * factorial(4) =  120
        return 4 * factorial(3) =  24
            return 3 * factorial(2) =  6
                return 2 * factorial(1) =  2
                    return 1 * factorial(0) =  1
    1 * 2 * 3 * 4 * 5 = 120

**Advantages of C++ Recursion**

- It makes our code shorter and cleaner.
- Recursion is required in problems concerning data structures and advanced algorithms, such as Graph and Tree Traversal.

**Disadvantages of C++ Recursion**

- It takes a lot of stack space compared to an iterative program.
- It uses more processor time.
- It can be more difficult to debug compared to an equivalent iterative program.
