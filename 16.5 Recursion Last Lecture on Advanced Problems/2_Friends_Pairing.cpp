#include<bits/stdc++.h>
using namespace std;
/*	Find the no. of ways in whih n firends can remain single or can be paired up.	*/
int friendsPairing(int n){
    if(n==0 || n==1 || n==2){
        return n;
    }
    return friendsPairing(n-1) + friendsPairing(n-2)*(n-1);
}
int main(){
    cout<<friendsPairing(4);
    return 0;
}