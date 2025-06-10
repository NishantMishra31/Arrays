#include<bits/stdc++.h>
using namespace std;

vector <int> superior_elements(vector <int> &arr){
    int n = arr.size();
    int maxi = INT_MIN;
    vector <int> ans;
    for (int i = n-1; i >= 0; i--){
        if (arr[i] > maxi){
            ans.push_back(arr[i]);
        }
        maxi = max(arr[i], maxi);
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    vector <int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    //call
    vector <int> ans = superior_elements(arr);
    for (auto it : ans) cout << it << " ";
    return 0;
}