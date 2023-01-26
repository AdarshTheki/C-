## Time Complexity:

**Time Complexity** <br>
Time complexity of any algorithm is the time taken by the algorithm to complete. It is an important metric to show the efficiency of the algorithm and for comparative analysis. We tend to reduce the time complexity of algorithm that makes it more effective.

**There are different types of time complexities used, let’s see one by one:**

1. Constant time     – **O(1)**
2. Linear time       – **O(n)**
3. Logarithmic time  – **O(log n)**
4. Quadratic time    – **O(n^2)**
5. Cubic time        – **O(n^3)**

The Fibonacci sequence is defined as follows:
`F(0) = 0, F(1) = 1, F(n) = F(n-1) + F(n-2) for n > 1`

A simple implementation of this algorithm in C++ using recursion is:
```
int fib(int n) {
    if (n <= 1) return n;
    return fib(n-1) + fib(n-2);
}
```
The time complexity of this algorithm is O(2^n), because at each recursive call, we are making two more recursive calls. This results in an exponential number of calls, which becomes very large for large values of n. The space complexity of this algorithm is O(n), because at any given time, we have n function calls on the call stack.