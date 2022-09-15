#include<bits/stdc++.h>
using namespace std;
/*	write a program to generate all possible subsets of a set {a,b,c}*/
void subset(int arr[], int n){
    for(int i=0; i<(1<<n); i++){
        for(int j=0; j<n; j++){
            if(i & (1<<j)){
                cout<<arr[j]<<" ";
            }
        }
        cout<<endl;
    }
}
int main(){
    int arr[4] = {1,2,3,4};
    subset(arr, 4);
    return 0;
}