#include<bits/stdc++.h>
using namespace std;

//this is a brute force solution that takes O(n^3) TC
// it generates all subarrays and sums them up to find the maximum sum
int maxsubarraysum(vector <int> &arr){
    int sum;
    int maxi = INT_MIN;
    int n = arr.size();
    for (int i = 0; i < n; i++){
        for (int j = i; j < n; j++){
            sum = 0;
            for (int k = i; k <= j; k++){
                sum += arr[k];
            }
            maxi = max(maxi, sum);
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
    //call
    cout << maxsubarraysum(arr);
    return 0;
}
