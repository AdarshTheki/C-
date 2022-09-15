#include<bits/stdc++.h> 
using namespace std; 
/*      Matrix Search: Given  n x m matrix.
    Write an algorithm to find that the given value exists
    in the matrix or not. Integers in each row are sorted 
    in ascending from left to right.Integers in each column
    are sorted in ascending from top to bottom
*/
int main() {
    int n, m; 
    cin >> n >> m; 
    int target; 
    cin >> target; 
    int mat[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) { 
            cin >> mat[i][j];
        }
    }
    bool found = false; 
    int r = 0, c = n - 1;
    while (r < m && c >= 0) {
        if (mat[r][c] == target) { 
            found = true;
        }
        mat[r][c] > target ? c-- : r++; // Trenary if else condtion 
    }
    if (found){
        cout << "Found";
    }else{
    cout << "Not Found";
    }return 0;
}
