#include<bits/stdc++.h>
using namespace std;

// this approach uses a hash set to store the unique elements in the array
// TC is O(3n) if set allows lookup of O(1)
// SC is O(n) for storing the elements
int longest_cons_seq(vector <int> &arr){
    int n = arr.size();
    if (n == 0) return 0;
    int longest = 1;
    unordered_set <int> st;
    for ( int i = 0; i < n; i++){
        st.insert(arr[i]);
    }
    for (auto it : st){
        if (st.find(it - 1) == st.end()){
            int cnt = 1;
            int x = it;
            while (st.find(x+1) != st.end()){
                x += 1;
                cnt += 1;
            }
            longest = max(longest, cnt);
        }
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
