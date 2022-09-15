#include<bits/stdc++.h>
using namespace std;

int binaryToDecimal(int n){
    int ans = 0;
    int x = 1;
    while(n>0){
        int y = n%10;
        ans += x*y;
        cout<<ans <<" ";
        x *=2;
        n /= 10;
    }
    return ans;
}
int main(){
    int n;
    cout <<"Enter the Binary To Decimal\n";
    cin>>n;
    
    cout << binaryToDecimal(n) << endl;
    return 0;
}