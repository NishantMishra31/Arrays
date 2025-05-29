#include<bits/stdc++.h>
using namespace std;

// this needs sorted arrays, sort them before running
vector <int> intersection(vector<int> &arr1, vector<int> &arr2){
    int n = arr1.size();
    int m = arr2.size();
    int i=0;
    int j=0;
    vector<int> result;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            i++;
        } 
        else if(arr2[j]<arr1[i]){
            j++;
        }
        else{
            result.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    return result;
}

int main(){
    int n;
    cin >> n;
    vector <int> arr1(n);
    for(int i = 0; i<n; i++){
        cin >> arr1[i];
    }
    int m;
    cin >> m;
    vector <int> arr2(m);
    for(int i = 0; i<m; i++){
        cin >> arr2[i];
    }
    vector<int> result = intersection(arr1, arr2);
    for (auto x : result) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
