#include<bits/stdc++.h>
using namespace std;

int missing(vector<int>& nums) {
        int n = nums.size();
        int xor_all = 0;
        int xor_nums = 0;
        for (int i = 0; i <= n; i++) {
            xor_all ^= i;
        }
        for (int num : nums) {
            xor_nums ^= num;
        }
        return xor_all ^ xor_nums;
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