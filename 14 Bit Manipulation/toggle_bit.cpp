#include<bits/stdc++.h>
using namespace std;

int toggleBit(int n, int pos){
    return (n xor (1<<pos));
}
int main()
{
    cout<<toggleBit(2,5);
    return 0;
}