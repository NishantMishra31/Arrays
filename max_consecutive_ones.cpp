#include<bits/stdc++.h>
using namespace std;

int max_ones(vector <int> &arr){
    int n = arr.size();
    int cnt = 0;
    int maxi = 0;
    for (int i = 0; i < n; i++){
        if(arr[i] == 1){
            cnt++;
            maxi = max(maxi, cnt);
        }
        else {
            cnt = 0;
        }
    }
    return maxi;
}

int main(){
    int n;
    cin >> n;
    vector <int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int max_count = max_ones(arr);
    cout << max_count;
    return 0;
}