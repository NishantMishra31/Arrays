#include<bits/stdc++.h>
using namespace std;

vector <int> rearrange_array(vector <int> &arr){
    int n = arr.size();
    vector <int> pos_arr, neg_arr;
    for (int i = 0; i < n; i++){
        if (arr[i] >= 0) pos_arr.push_back(arr[i]);
        if (arr[i] < 0) neg_arr.push_back(arr[i]);
    }
    for (int i = 0; i < n/2; i++){
        arr[2*i] = pos_arr[i];
        arr[2*i + 1] = neg_arr[i];
    }
}

int main(){
    int n;
    cin >> n;
    vector <int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    //call
    rearrange_array(arr);
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}