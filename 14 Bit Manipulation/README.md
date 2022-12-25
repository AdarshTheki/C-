## Compute XOR from 1 to n (direct method):

**The  problem can be solved based on the following observations:**

Say x = n%4. The XOR value depends on the value if x. If

    x = 0, then the answer is n.
    x = 1, then answer is 1.
    x = 2, then answer is n+1.
    x = 3, then answer is 0.

**Direct XOR of all numbers from 1 to n**

    int computeXOR(int n){
        if (n % 4 == 0)
            return n;
        if (n % 4 == 1)
            return 1;
        if (n % 4 == 2)
            return n + 1;
        else
            return 0;
    }
