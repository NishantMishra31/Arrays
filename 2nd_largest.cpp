#include<bits/stdc++.h>
using namespace std;

int slargest_element(vector<int> &arr){
    int n = arr.size();
    int largest = arr[0];
    int slargest = INT_MIN;
    for(int i = 0; i < n; i++){
        if(arr[i] > largest){
            slargest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > slargest){
            slargest = arr[i];
        }
    }
    return slargest;
}

int main(){
    int n;
    cin >> n;
    vector <int> arr(n);
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    int slargest  = slargest_element(arr);
    cout << slargest;
    return 0;
}