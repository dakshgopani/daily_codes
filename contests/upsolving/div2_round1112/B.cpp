// https://codeforces.com/contest/2250/problem/B

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;
using pii = pair<int, int>;

#define endl '\n'

template <typename T>
void input(vector<T> &v) {
    for (T &x : v)
        cin >> x;
}

template <typename T>
void output(const vector<T> &v) {
    for (const T &x : v)
        cout << x << " ";
    cout << endl;
}

void solve() {
    int n, k;
    cin >> n >> k;

    if(n - k == 1){
        cout << -1 << endl;
        return;
    }

    // n = 8, k = 3
    int blocks = n - k; // 5
    int zeros = (n + 1) / 2; // 4
    int ones = n - zeros; // 4
    int diff = n - k - 2; // first (n - k) alternating blocks // 3  
    // remaining blocks will form k pairs

    for(int i = 0; i < diff; i++){
        if(i % 2 == 0){
            cout << 0;
            zeros--;
        }
        else{
            cout << 1;
            ones--;
        }
    }
    // 0 1 0 
    // 0 = 2, 1 = 3

    // when diff is even the loop always ends with 1 so we start a new block from 0
    if(diff % 2 == 0){
        for(int i = 0; i < zeros; i++) // first display all 0s
            cout << 0;
        
        for(int i = 0; i < ones; i++) // then all 1s
            cout << 1;
    }
    // reverse for this
    else{
        for(int i = 0; i < ones; i++)
            cout << 1;
        
        for(int i = 0; i < zeros; i++)
            cout << 0;
    }
    // 11100
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}