#include<bits/stdc++.h>
using namespace std;

// this code works for only-positive and mixed (positive-negative) values both.
// however, we can optimize the code if array is positive only

int longest_subarray_with_sum_k(vector <int> &arr, long long k){
    long long n = arr.size();
    map <long long, int> preMap;
    long long sum = 0;
    int maxLen = 0;
    for (int i = 0; i < n; i++){
        sum += arr[i];
        if ( sum == k){
            maxLen = max(maxLen , i+1);
        }
        long long rem = sum - k;
        if ( preMap.find(rem) != preMap.end()){
            int len = i - preMap[rem];
            maxLen = max(maxLen, len);
        }
        if ( preMap.find(sum) == preMap.end()){
            preMap[sum] = i;
        }
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
