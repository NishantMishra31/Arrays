#include <bits/stdc++.h>
using namespace std;

vector <int> twosum(vector <int> &arr, int k){
    int n = arr.size();
    //returns indices, but it is brute force and takes near about O(n^2) TC
    for(int i = 0; i < n; i++){
        for(int j = i;  j < n; j++){
            if (i == j) continue;
            if (arr[i] + arr[j] == k){
                return {i,j};
            }
        }
    }
    return {-1};
}

vector <int> twosum2(vector <int> &arr, int k){
    int n = arr.size();
    //returns indices, and it is optimal as well
    map <int, int> mp;
    for (int i = 0; i < n; i++){
        int a = arr[i];
        int more = k - a;
        if (mp.find(more) != mp.end()){
            return {mp[more],i};
        }
        mp[a] = i;
    } 
    return {-1};
}

string twosum3(vector <int> &arr, int k){
    //only for checking the two sum existence, does not return indices but most optimal
    int n =  arr.size();
    sort(arr.begin(), arr.end());
    int left = 0, right = n - 1;
    while  (left < right){
        int sum = arr[left] + arr[right];
        if (sum == k) return "twosum does exist";
        else if (sum > k) right --;
        else if (sum < k) left ++;
    }
    return "twosum does not exists";
}

int main(){
    int n;
    cin >> n;
    vector <int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int k;
    cin >> k;
    vector <int> result = twosum(arr, k);
    for (auto it: result){
        cout << it << ", ";
    }
    cout << endl;
    vector <int> result2 = twosum2(arr, k);
    for (auto it: result2){
        cout << it << ", ";
    }
    cout << endl << twosum3(arr, k);
    return 0;
}
