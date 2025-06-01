#include<bits/stdc++.h>
using namespace std;

int longest_subarray_with_sum_k(vector <int> &arr, long long k){
    long long n = arr.size();
    int left = 0, right = 0;
    long long sum = arr[0];
    int maxLen = 0;
    while (right < n){
        while (left <= right && sum > k){
            sum -= arr[left];
            left ++;
        }
        if (sum  == k){
            maxLen = max(maxLen, right - left + 1);
        }
        right ++;
        if (right < n) sum += arr[right];
    }
    return maxLen;
}

int main(){
    int n;
    cin >> n;
    vector <int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    long long k;
    cin >> k;
    // call
    int result = longest_subarray_with_sum_k(arr, k);
    cout << result;
    return 0;
}