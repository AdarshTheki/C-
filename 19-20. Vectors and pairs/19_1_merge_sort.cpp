#include <bits/stdc++.h>
using namespace std;
void merge(int arr[], int l, int mid, int r){
    int n1 = mid - l + 1;
    int n2 = r - mid;

    int a[n1], b[n2]; // temp arr

    for (int i=0; i<n1; i++){
        a[i] = arr[l+i];
    }
    for (int i=0; i<n2; i++){
        b[i] = arr[mid+1+i];
    }
    int i = 0; // Initial index of first subarray
	int j = 0; // Initial index of second subarray
	int k = l; // Initial index of merged subarray
    while (i < n1 && j < n2){
        if (a[i] <= b[j]){
            arr[k] = a[i];
            i++;
        }
        else{
            arr[k] = b[j];
            j++;
        }
        k++;
    }

    while(i < n1){
        arr[k] = a[i];
        i++; k++;
    }
    while(j < n2){
        arr[k] = b[j];
        j++; k++;
    }
}
void mergeSort(int arr[], int l, int r){
    if (l < r){
        int mid = (l + r) / 2; 
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);

        merge(arr, l, mid, r);
    }
}

int main(){
    int arr[] = {12, 11, 13, 5, 6, 7};
    cout<<"Given Array: ";
    for (int i=0; i<6; i++){
        cout << arr[i] << " ";
    }
    cout<<"\nSort Array : ";
    mergeSort(arr, 0, 5);
    for (int i=0; i<6; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
/* Time Complexity: O(n log(n)),
   T(n) = 2T(n/2) + θ(n)
   Auxiliary Space: O(n)   */