#include<bits/stdc++.h>
using namespace std;

// this approach uses hashmaps to find out the majority element but increases space complexity
int majority_element(vector <int> &arr){
    int n = arr.size();
    map<int, int> mp;
    for(int i = 0; i < n; i++){
        mp[arr[i]]++;
    }
    for(auto it : mp){
        if (it.second > n/2){
            return it.first;
        }
    }
    return -1;
}

int main(){
    int n;
    cin >> n;
    vector <int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << majority_element(arr);
    return 0;
}
