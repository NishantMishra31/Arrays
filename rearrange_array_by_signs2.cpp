#include<bits/stdc++.h>
using namespace std;

vector <int> rearrange_array(vector <int> &arr){
    int n = arr.size();
    vector <int> ans(n);
    int posIndex = 0, negIndex = 1;
    for (int i = 0; i < n; i++){
        if (arr[i] < 0){
            ans[negIndex] = arr[i];
            negIndex += 2;
        }
        else{
            ans[posIndex] = arr[i];
            posIndex += 2;
        }
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
    vector <int> ans = rearrange_array(arr);
    for (int i = 0; i < n; i++){
        cout << ans[i] << " ";
    }
    return 0;
}