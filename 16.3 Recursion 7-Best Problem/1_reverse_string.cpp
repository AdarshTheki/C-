#include<bits/stdc++.h>
using namespace std;
/*  Reverse a string using recursion " binod "  */
void reverse(string s){
    if(s.length()==0){      //base case
        return;
    }
    string ros = s.substr(1);
    reverse(ros);
    cout<<s[0];
}
int main(){
    reverse("binod");
    return 0;
}