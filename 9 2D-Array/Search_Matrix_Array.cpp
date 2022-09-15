#include<bits/stdc++.h>
using namespace std;
/*	Search 'x' matrix in 2D-Array	*/
int main()
{
    int n, m;
    cin>>n>>m;
    int arr[n][m];
    // Taking Input Array
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    int x;
    cin>>x;
    bool flag= false;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j]==x){
                cout<<i<<" "<<j<<" "<<"\n";
                flag=true;
            }
        }
    }
    if(flag){
        cout<<"Element is Found\n";
    }else{
        cout<<"Element is not found\n";
    }
    return 0;
}