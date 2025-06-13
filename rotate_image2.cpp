#include <bits/stdc++.h>
using namespace std;

void rotate_image(vector<vector<int>> &arr){
    int n = arr.size();
    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
    for (int i = 0; i < n; i++){
        reverse(arr[i].begin(),arr[i].end());
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