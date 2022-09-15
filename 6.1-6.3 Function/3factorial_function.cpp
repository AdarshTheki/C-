#include<iostream>
using namespace std;
// factorial 

int fact(int n){
    int factorial=1;
    for(int i=2; i<=n; i++){
        factorial=factorial*i;
        //factorial*=i;
    }
    return factorial;
}
int main(){
    int n;
    cin>>n;
    
    int ans = fact(n);
    cout<<ans<<endl;
    return 0;
}