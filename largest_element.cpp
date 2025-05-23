#include<bits/stdc++.h>
using namespace std;

/* Brute force approach sorts the array using merge or quick sort 
and then returns the last array index element equates the time complexity
to that of the sort used that is O(nlogn) */

/* This program has optimal time complexity of O(n) using traversal and comparison loops */


int largest_element(vector <int> &arr){
    int n = arr.size();
    int largest = 0;
    for(int i=0; i<n; i++){
        if (largest < arr[i]) largest = arr[i];
    }
    return largest;
}
int main(){
    int n;
    cin >> n;
    vector <int> arr(n);
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    int largest  = largest_element(arr);
    cout << largest;
    return 0;
}
