#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;  // declearation
    a = 12; // initialisation

    cout << "size of int = " << sizeof(a)<<" bytes" << endl;

    float b = 3.14;
    cout << "size of float = " << sizeof(b)<<" bytes" << endl;

    char c = 'a';
    cout << "size of char = " << sizeof(c)<<" bytes" << endl;

    bool d = true;
    cout << "size of bool = " << sizeof(d)<<" bytes" << endl;
    
    short int e;
    cout << "size of short int = " << sizeof(e)<<" bytes" << endl;
    
    long int f;
    cout << "size of long int = " << sizeof(f)<<" bytes" << endl;
    return 0;
}