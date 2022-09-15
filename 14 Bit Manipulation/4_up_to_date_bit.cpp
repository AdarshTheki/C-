#include<bits/stdc++.h>
using namespace std;

int updatBit(int n, int pos, int value){
    int mask = ~(1<<pos);
    n = n & mask;
    return (n | (value<<pos));
}
int main()
{
    cout<<updatBit(5,1,1)<<endl;
    return 0;
}