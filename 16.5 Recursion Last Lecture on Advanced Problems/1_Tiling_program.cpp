#include<bits/stdc++.h>
using namespace std;
/*	Given a "2 X n" board and tiles of suze "2 X 1", count the no. of the given board using these tiles.*/
int tilingWays(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return tilingWays(n-1) + tilingWays(n-2);
}
int main(){
    cout<<tilingWays(4);
    return 0;
}