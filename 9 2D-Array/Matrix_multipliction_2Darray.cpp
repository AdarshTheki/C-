#include<iostream>
using namespace std;
/*Given two 2-Dimensional arrays of sizes n1 x n2 and n2 x n3.
Your task is to multiply these matrices and output the multiplied matrix.
*/
int main()
{
    int n1,n2,n3;   // n3 is answer print
    cin >> n1 >> n2 >> n3;
    int m1[n1][n2]; 
    int m2[n2][n3]; 
    // input array m1
    for(int i=0; i<n1; i++) {
        for(int j=0; j<n2; j++){
            cin >> m1[i][j];
        } 
    }
    // input array m2
    for(int i=0; i<n2; i++) { 
        for(int j=0; j<n3; j++){
            cin >> m2[i][j];
        }
    }
    // insalization of answer ans
    int ans[n1][n3];
    for(int i=0; i<n1; i++) { 
        for(int j=0; j<n3; j++){
            ans[i][j] = 0;
        }
    }
    
    for(int i=0; i<n1; i++) { 
        for(int j=0; j<n3; j++)
        {
            for(int k=0; k<n2; k++) {
                ans[i][j] += m1[i][k]*m2[k][j];
            }
        }
    }
    // print ans
    for(int i=0; i<n1; i++) { 
        for(int j=0; j<n3; j++){
            cout << ans[i][j] <<" ";
        } 
        cout << endl;
    }
    return 0;
}
