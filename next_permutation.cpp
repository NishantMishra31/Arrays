#include<bits/stdc++.h>
using namespace std;

vector <int> nextpermutation(vector <int> &arr){
    next_permutation(arr.begin(),arr.end());
    return arr;
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