#include<bits/stdc++.h>
using namespace std;
/* Calculate n raised to power of p. */
int power(int n, int p){
    if(p==0){
        return 1;
    }
    int PrePower = power(n, p-1);
    return n*PrePower;
}
int main(){
    int n, p;
    cin>>n>>p;
    cout<<power(n, p);    
    return 0;
} 