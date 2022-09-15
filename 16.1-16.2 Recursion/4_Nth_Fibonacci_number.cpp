#include<bits/stdc++.h>
using namespace std;
/*	print the n th Fibonacci number	*/

int fib(int n){
    if(n==0 || n==1){   //base case
        return n; 
    }
    return fib(n-1) + fib(n-2);
}
int main()
{
    int n;
    cin>>n;
    cout<<"Fibonacci-"<<n<<" is "<<fib(n)<<endl;
    return 0;
}