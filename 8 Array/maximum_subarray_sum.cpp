#include<bits/stdc++.h>
using namespace std;
/*	Maximum Sum Subarray with Brute Force:	*/
int main()
{
    int n, sum=0;
    int maxSum=INT_MIN;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    for (int i=0; i<n; i++) {
        for(int j=i; j<n; j++) {
            for(int k=i; k<=j; k++) {
                sum += arr[k];
            }
            maxSum=max(maxSum, sum);
        }
    }
    cout<<maxSum<<endl;
    return 0;
}