#include <bits/stdc++.h>
using namespace std;

// only for sorted arrays

int rem_duplicates_optimal(vector <int> &arr){
    int n = arr.size();
    int i = 0;
    for (int j = 1; j < n; j++){
        if (arr[i] != arr[j]){
            arr[i+1] = arr [j];
            i++;
        }
    }
    return i+1;
}

int main(){
    int n;
    cin >> n;
    vector <int> arr(n);
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    int index = rem_duplicates_optimal(arr);
    for(int i = 0; i < index; i++){
        cout << arr[i] << " ";
    }
    return 0;
}