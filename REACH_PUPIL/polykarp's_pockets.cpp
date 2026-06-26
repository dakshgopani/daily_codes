// https://codeforces.com/problemset/problem/1003/A
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    unordered_map<int, int> mp;

    for(auto it : arr)
        mp[it]++;

    int maxi = INT_MIN;

    for(auto it : mp)
        maxi = max(maxi, it.second);
    
    cout << maxi;   
}