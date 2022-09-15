#include<bits/stdc++.h>
using namespace std;
/*	print matrix  i=3 j=3  input: 89 17 10, 6 8 1, 17 89 35 
output: martix is :
        89 17 10
        6 8 1
        17 89 35	*/
int main()
{
    // Taking Input Array
    int n, m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    // Printing output array
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}