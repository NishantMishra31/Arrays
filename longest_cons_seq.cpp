#include<bits/stdc++.h>
using namespace std;

int longest_cons_seq(vector <int> &arr){
    int n = arr.size();
    if (n == 0) return 0;
    sort(arr.begin(),arr.end());
    int lastSmaller = INT_MIN;
    int cnt = 1, longest = 1;
    for (int i = 0; i < n; i++){
        if (arr[i] - 1 == lastSmaller){
            cnt += 1;
            lastSmaller = arr[i];
        }
        else if (arr[i] == arr[i - 1]) {
            continue;
        }
        else if (arr[i] != lastSmaller){
            cnt = 1;
            lastSmaller = arr[i];
        }
        longest = max(longest, cnt);
    }
    return longest;
}

int main(){
    int n;
    cin >> n;
    vector <int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    //call
    cout << longest_cons_seq(arr);
    return 0;
}