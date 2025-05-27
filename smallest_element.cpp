#include<bits/stdc++.h>
using namespace std;

int smallest_element(vector <int> &arr){
    int n = arr.size();
    int smallest = INT_MAX;
    for (int i = 0; i < n; i++){
        if (smallest > arr[i]) smallest = arr[i];
    }
    return smallest;
}

int main(){
    int n;
    cin >> n;
    vector <int> arr(n);
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    int smallest  = smallest_element(arr);
    cout << smallest;
    return 0;
}