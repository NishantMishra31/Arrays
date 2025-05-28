#include<bits/stdc++.h>
using namespace std;

int move_zeroes(vector <int> &arr){
    int n = arr.size();
    int j = -1;
    for (int i = 0; i < n; i++){
        if (arr[i] == 0){
            j = i;
            break;
        }
    }
    if (j==-1) return 0;

    for (int i = j+1; i < n; i++){
        if (arr[i] != 0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
    return 0;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    // call
    move_zeroes(arr);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}