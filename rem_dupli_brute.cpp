#include<bits/stdc++.h>
using namespace std;

int rem_duplicates_brute(vector<int> &arr){
    int n = arr.size();
    set <int> st;
    for (int i = 0; i < n; i++){
        st.insert(arr[i]);
        }
    int index = 0;
    for (auto it : st){
        arr[index] = it;
        index ++;
    }
    return index;
}

int main(){
    int n;
    cin >> n;
    vector <int> arr(n);
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    int index = rem_duplicates_brute(arr);
    for(int i = 0; i < index; i++){
        cout << arr[i] << " ";
    }
    return 0;
}