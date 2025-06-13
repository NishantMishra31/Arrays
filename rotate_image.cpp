#include <bits/stdc++.h>
using namespace std;

// this approach use O(N^2) TC but also takes an extra space to store the answer which is not needed
void rotate_image(vector<vector<int>> &arr){
    int n = arr.size();
    vector<vector<int>> ans(n, vector<int>(n));
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            ans[j][n-1-i] = arr[i][j];
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            arr[i][j] = ans[i][j];
        }
    }
    return;
}

int main (){
    int n;
    cin >> n ;
    vector<vector<int>> arr(n, vector<int>(n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    // call
    rotate_image(arr);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
