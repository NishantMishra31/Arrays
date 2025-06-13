#include<bits/stdc++.h>
using namespace std;

// this is only approach to solve this problem
// it uses boundaries of the matrix to spiral into its centre

vector<int> spiral_matrix(vector<vector<int>> &arr){
    int n = arr.size();
    int m = arr[0].size();
    int left = 0, right = m - 1;
    int top = 0, bottom = n - 1;
    vector <int> ans;
    while (top <= bottom && left <= right){
        for(int i = left; i <= right; i++){
            ans.push_back(arr[top][i]);
        }
        top++;
        for(int i = top; i <= bottom; i++){
            ans.push_back(arr[i][right]);
        }
        right--;
        if (top <= bottom){
            for(int i = right; i >= left; i--){
                ans.push_back(arr[bottom][i]);
            }
        }
        bottom--;
        if(left <= right){
            for(int i = bottom; i >= top; i--){
                ans.push_back(arr[i][left]);
            }
            left++;
        }
    }
    return ans;
}

int main (){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> arr(n, vector<int> (m));
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    // call
    vector <int> ans = spiral_matrix(arr);
    for( int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    return 0;
}
