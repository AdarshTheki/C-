#include <iostream>
using namespace std;

int findMax(int arr[], int n) {
    int max = arr[0];             // O(1) space complexity
    for (int i = 1; i < n; i++) { // O(n) time complexity
      if (arr[i] > max) {
            max = arr[i];
      }
   }
   return max;
}
int main(){

   int n;
   cin>>n;
   int arr[n];
   for(int i=0; i<n; i++){
      cin>>arr[i];
   }
   cout<<findMax(arr,n)<<endl;
   return 0;
}


