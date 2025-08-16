#include <bits/stdc++.h>
using namespace std;

// simple reverse functions to rotate the array

void left_rotate(vector<int>& arr,int k) {
    int n = arr.size();
    k = k % n; // to check complete reversals
    reverse(arr.begin(), arr.begin() + k);
    reverse(arr.begin()+k, arr.end());
    reverse(arr.begin(), arr.end());
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int k;
    cin >> k;
    left_rotate(arr, k);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
