#include<bits/stdc++.h>
using namespace std;

// this approach uses the concepts of comparison based sorting and sub-array reversing
vector <int> nextpermutation(vector <int> &nums){
    int ind = -1;
    int n  = nums.size();
    for (int i = n - 2; i >= 0; i--){
        if (nums[i] < nums[i+1]) {
            ind = i;
            break;
        }
    }
    if (ind == -1){
        reverse(nums.begin(), nums.end());
        return nums;
    }
    for (int i = n-1; i > ind; i--){
        if (nums[i] > nums[ind]){
            swap(nums[i], nums[ind]);
            break;
        }
    }
    reverse(nums.begin() + ind + 1, nums.end());
    return nums;
}
int main(){
    int n;
    cin >> n;
    vector <int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    //call
    vector <int> ans = nextpermutation(arr);
    for (int i = 0; i < n; i++){
        cout << ans[i] << " ";
    }
    return 0;
}
