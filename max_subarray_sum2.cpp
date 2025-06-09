#include<bits/stdc++.h>
using namespace std;

// this approach uses kadane's algorithm and returns the sum in O(n) TC
long long maxsubarraysum(vector <int> &arr){
    int n = arr.size();
    int maxsum = arr[0];
    int sum = arr[0];
    for (int i = 1; i < n; i++) {
        sum = max(sum + arr[i], arr[i]);
        maxsum = max(sum, maxsum);
    }
    return maxsum;
}

int main(){
    int n;
    cin >> n;
    vector <int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    //call
    cout << maxsubarraysum(arr);
    return 0;
}
