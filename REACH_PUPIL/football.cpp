// https://codeforces.com/problemset/problem/43/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    unordered_map<string, int> mp;

    for(int i = 0; i < n; i++){
        string s;
        cin >> s;

        mp[s]++;
    }

    int maxi = 0;
    string winner = "";

    for(auto it : mp){
        if(it.second > maxi){
            maxi = it.second;
            winner = it.first;
        }
    }

    cout << winner;
}