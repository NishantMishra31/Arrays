#include<bits/stdc++.h>
using namespace std;

int linear_search(vector <int> &arr, int num){
    int n = arr.size();
    for (int i = 0; i < n; i++){
        if( arr[i] == num){
            return i;
        }
    }
    return -1;
}

int  main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int num;
    cin >> num;
    // call
    int index = linear_search(arr, num);
    if (index == -1) cout << "element not found";
    else cout << "element found at index: " << index;
    return 0;
}