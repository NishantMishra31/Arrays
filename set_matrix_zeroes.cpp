#include <bits/stdc++.h>
using namespace std;

void markrow(vector<vector<int>> &arr, int row){
    int m = arr[0].size();
    for (int j = 0; j < m; j++){
        if (arr[row][j] != 0){
            arr[row][j] = -1; // placeholder clash possible
        }
    }
}

void markcol(vector<vector<int>> &arr, int col){
    int n = arr.size();
    for (int i = 0; i < n; i++){
        if (arr[i][col] != 0){
            arr[i][col] = -1; // placeholder clash possible
        }
    }
}

void set_matrix_zeroes(vector<vector<int>> &arr){
    int n = arr.size();
    int m = arr[0].size();
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (arr[i][j] == 0){
                markrow(arr, i);
                markcol(arr, j);
            }
        }
    }
    for (int i = 0; i < n; i++){
        for ( int j = 0; j < m; j++){
            if (arr[i][j] == -1){
                arr[i][j] = 0;
            }
        }
    }
    return;
}

int main(){
    int n, m;
    cin >> n;
    cin >> m;
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