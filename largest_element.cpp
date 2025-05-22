#include<bits/stdc++.h>
using namespace std;

// this program has optimal time complexity of O(n)

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