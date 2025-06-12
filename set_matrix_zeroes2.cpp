#include <bits/stdc++.h>
using namespace std;

// this approac hashes the matrix values in temporary vectors and then modifies the matrix in place accordingly
// O(2N^2) TC to traverse the array twice and also extra space of O(N+M) for storing rows and cols values
void set_matrix_zeroes(vector<vector<int>>& matrix) {
    int n = matrix.size();
    int m = matrix[0].size();
    vector <int> rows(n, 0);
    vector <int> cols(m, 0);
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (matrix[i][j] == 0){
                rows[i] = 1;
                cols[j] = 1;
            }
        }
    }
    for (int i = 0; i < n; i++){
        for ( int j = 0; j < m; j++){
            if (rows[i] == 1 || cols[j] == 1){
                matrix[i][j] = 0;
            }
        }
    }
    return;
}

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> arr(n, vector<int>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    //call
    set_matrix_zeroes(arr);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
