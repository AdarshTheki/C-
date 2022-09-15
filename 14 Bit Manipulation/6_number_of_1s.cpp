#include<bits/stdc++.h>
using namespace std;
/*	write a program to count the number to ones in binary representation of a number */
int numberofones(int n){
    int count = 0;
    while(n){
        n = n & (n-1);
        count++;
    }
    return count;
}
int main(){
    cout<<numberofones(19);
    return 0;
}