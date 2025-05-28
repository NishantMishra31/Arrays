#include<bits/stdc++.h>
using namespace std;

// you will sort the arrays for this

vector <int> union_array(vector <int> arr1, vector <int> arr2 ){
    int a = arr1.size();
    int b = arr2.size();
    int i = 0, j = 0;
    vector <int> union_arr;
    while(i < a && j < b){
        if ( arr1[i] <= arr2[j]){
            if (union_arr.size() == 0 || union_arr.back() != arr1[i]){
                union_arr.push_back(arr1[i]);
            }
            i++;
        }
        else{
            if (union_arr.size() == 0 || union_arr.back() != arr2[j]){
                union_arr.push_back(arr2[j]);
            }
            j++;
        }
    }
    while(i < a){
        if (union_arr.size() == 0 || union_arr.back() != arr1[i]){
            union_arr.push_back(arr1[i]);
        }
        i++;
    }
    while(j < b){
        if (union_arr.size() == 0 || union_arr.back() != arr2[j]){
            union_arr.push_back(arr2[j]);
        }
        j++;
    }
    return union_arr;
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
    vector<int> result = union_array(arr1, arr2);
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}