// https://codeforces.com/problemset/problem/1139/B
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
    int n;
    cin >> n;

    vector<int> arr(n);
    input(arr);

    long long next = arr[n - 1];
    long long cost = arr[n - 1];

    for(int i = n - 2; i >= 0; i--){
        long long curr = min(1LL * arr[i], next - 1);

        if(curr < 0)
            curr = 0;

        cost += curr;
        next = curr;
    }

    cout << cost;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int t;
    // cin >> t;

    // while (t--)
        solve();

    return 0;
}