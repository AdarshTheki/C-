#include<bits/stdc++.h>
using namespace std;
/* Print number till '1 to n' in Increasing as well as Decreasing order */

void dec(int n){
    if(n==1){
        cout<<"1"<<endl;
        return;
    }
    cout<<n<<" ";
    dec(n-1);
}
void inc(int n){
    if(n==1){
        cout<<"1"<<" ";
        return;
    }
    inc(n-1);
    cout<<n<<" ";
}
int main(){   
    int n;
    cin>>n;
    dec(n);
    inc(n);
    return 0;
}