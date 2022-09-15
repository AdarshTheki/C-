#include<bits/stdc++.h>
using namespace std;
/* To get the sum of the first 'n' number using recursion.	*/

int sum(int n){
    if(n==0){
        return 0;
    }
    int prevsum = sum(n-1);
    return n + prevsum;
}
int main(){
    int n;
    cin>>n;
    cout<<sum(n);
    return 0;
}