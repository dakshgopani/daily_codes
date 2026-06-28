#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    string s;
    cin >> s;

    unordered_map<string, int> mp;

    for(int i = 0; i < n - 1; i++){
        mp.insert({s[i], s[i + 1]})++;
    }
}