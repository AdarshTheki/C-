#include<bits/stdc++.h>
using namespace std;
/*	Print number till 'n' in Decreasing order. */
void dec(int n){
    if(n==0){
        return;
    }
    cout<<n<<endl;
    dec(n-1);
}
int main()
{
    int n;
    cin>>n;
    dec(n);
    return 0;
}