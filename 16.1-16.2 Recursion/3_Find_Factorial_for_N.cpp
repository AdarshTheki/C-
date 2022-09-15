#include<bits/stdc++.h>
using namespace std;
/*	find factorial of a number of n	*/

int fact(int n){
    if(n==0){
        return 1;
    }
    //int prevfact = fact(n-1);
    //return n * prevfact;
    return n * fact(n-1);
}
int main()
{
    int n;
    cin>>n;
    cout<<fact(n);
    return 0;
}