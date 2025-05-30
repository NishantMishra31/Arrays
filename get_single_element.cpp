#include<bits/stdc++.h>
using namespace std;

int getSingleElement(vector <int> &arr){
    int n = arr.size();
    int xor_op = 0;
    for (int i = 0; i < n; i++){
        xor_op = xor_op ^ arr[i];
    }
    return xor_op;
}

int main(){
    int n;
    cin >> n;
    vector <int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    // call
    int element = getSingleElement(arr);
    cout << element;
    return 0;
}