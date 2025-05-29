#include<bits/stdc++.h>
using namespace std;

// this solution uses the optimal approach of summation, but space complexity is higher

int missing(vector <int> &arr){
    int n = arr.size();
    int sum = n*(n+1)/2;
    int sum_arr = 0;
    for (int i = 0; i < n; i++){
        sum_arr += arr[i];
    }
    return sum - sum_arr;
}
int main(){
    int n;
    cin >> n;
    vector <int> arr(n);
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    int missing_number =  missing(arr);
    cout << missing_number;
    return 0;
}
