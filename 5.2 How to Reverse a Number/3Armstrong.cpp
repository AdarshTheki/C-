#include <iostream>
#include <math.h>
#include<bits\stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;

    int sum = 0;
    int originaln = n;

    while (n > 0){
        int lastdigit = n % 10;
        
        //sum += lastdigit * lastdigit * lastdigit;
        
        sum += lastdigit * lastdigit * lastdigit;    // new header file
        n = n / 10;
    }
    if (sum == originaln){
        cout << "Armstrong Number " << sum << endl;
    }
    else{
        cout << "not Armstrong Number " << sum << endl;
    }
    return 0;
}