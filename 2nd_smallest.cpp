#include<bits/stdc++.h>
using namespace std;

int ssmallest_element(vector <int> &arr){
    int n = arr.size();
    int smallest = arr[0];
    int ssmallest = INT_MAX;
    for (int i = 0; i < n; i++){
        if (smallest > arr[i]){
            ssmallest = smallest;
            smallest = arr[i];
        }
        else if ( arr[i] < smallest && arr[i] < ssmallest){
            ssmallest = arr[i];
        }
    }
    return ssmallest;
}

int main(){
    int n;
    cin >> n;
    vector <int> arr(n);
    for (int i; i<n; i++){
        cin >> arr[i];
    }
    int ssmallest = ssmallest_element(arr);
    cout << ssmallest;
    return 0;
}