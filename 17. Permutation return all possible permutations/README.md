## 14. Permutation:

**A permutation,** also called an **“arrangement number”** or **“order”**, is a rearrangement of the elements of an ordered list S into a one-to-one correspondence with S itself. A string of length n has **n!** permutation.

**Method: (Using rotate())**

std::rotate function rotates elements of a vector/string such that the passed middle element becomes first. For example, if we call rotate for “ABCD” with middle as second element, the string becomes “BCDA” and if we again call rotate with middle as second element, the string becomes “CDAB”. Refer this for a sample program.

C++ program to print all permutations with duplicates allowed using next_permutation

    #include <bits/stdc++.h>
    using namespace std;

    // Function to print permutations of string str
    // using next_permutation
    void permute(string str){
        // Sort the string in lexicographically
        // ascending order
        sort(str.begin(), str.end());

        // Keep printing next permutation while there
        // is next permutation
        do {
        cout << str << endl;
        } while (next_permutation(str.begin(), str.end()));
    }

    // Driver code
    int main(){
        string str = "CBA";
        permute(str);
        return 0;
    }
