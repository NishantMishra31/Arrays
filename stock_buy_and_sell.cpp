#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {
    int n = prices.size();
    int mini =  prices[0];
    int maxprofit = 0;
    for (int i = 0; i < n ; i++){
        int cost = prices[i] - mini;
        maxprofit = max(maxprofit, cost);
        mini = min(mini, prices[i]);
    }
    return maxprofit;
}

int main(){
    int n;
    cin >> n;
    vector <int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    //call
    cout << maxProfit(arr);
    return 0;
}