#include<bits/stdc++.h>
using namespace std;

bool isSorted(vector<int> &arr){
    int n = arr.size();
    for (int i = 1; i < n; i++){
        if (arr[i] >= arr[i-1]){}
        else return false;
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    vector <int> arr(n);
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    if ( isSorted(arr) == 1){
        cout << "Array is sorted";
    }
    else{
        cout << "Array is not sorted";
    }
    return 0;
}