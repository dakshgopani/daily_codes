// https://codeforces.com/problemset/problem/1385/A

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
    int x, y, z;
    cin >> x >> y >> z;

    vector<int> arr(x, y, z);
    sort(arr.begin(), arr.end());

    if(arr[1] == arr[2]){
        cout << "YES" << endl;
        cout << arr[0] << " " << arr[0] << " " << arr[2] << endl;
    }
    else
        cout << "NO" << endl;
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