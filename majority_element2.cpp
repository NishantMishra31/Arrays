#include<bits/stdc++.h>
using namespace std;

int majority_element(vector <int> &arr){
    int n = arr.size();
    int count = 0;
    int element;
    for (int i = 0; i < n; i++){
        if (count == 0){
            count++;
            element = arr[i];
        }
        else if (arr[i] == element){
            count++;
        }
        else{
            count--;
        }
    }
    int counter = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] == element) counter++;
    }
    if (counter > n/2) return element;
    else return -1;
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
