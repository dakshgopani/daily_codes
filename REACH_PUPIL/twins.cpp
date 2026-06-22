// https://codeforces.com/problemset/problem/160/A
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++) 
        cin >> arr[i];

    sort(arr.begin(), arr.end());

    int sum = accumulate(arr.begin(), arr.end(), 0);
    int currSum = 0;
    int coins = 0;

    for(int i = 0; i < n; i++){
        sum -= arr[i];
        currSum += arr[i];

        if(currSum >= sum)
            coins++;
    }

    cout << coins;

}