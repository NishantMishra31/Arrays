#include<bits/stdc++.h>
using namespace std;

void sort_array(vector <int> &arr){
    // this takes TC of O(2n) as there are two passes of iteration
    int n = arr.size();
    int count1 = 0, count2 = 0, count3 = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] == 0) count1 ++;
        else if (arr[i] == 1) count2 ++;
        else if (arr[i] == 2) count3 ++;
    }
    for (int i = 0; i < count1; i++){
        arr[i] = 0;
    }
    for (int i = count1; i < count1 + count2; i++){
        arr[i] = 1;
    }
    for (int i = count1 + count2; i < n; i++){
        arr[i] = 2;
    }
}

void sort_array2(vector <int> &arr){
    // the dutch national flag approach which takes TC of O(n) only
    // as it works in a single pass with three pointer approach
    int n = arr.size();
    int low = 0, mid = 0, high = n - 1;
    while(mid <= high){
        if (arr[mid] == 0){
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1){
            mid++;
        }
        else{
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int main(){
    int n;
    cin >> n;
    vector <int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort_array2(arr);
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
