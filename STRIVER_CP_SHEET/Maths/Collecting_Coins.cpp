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
    int a, b, c, n;
    cin >> a >> b >> c >> n;

    int maxi = max(a, max(b, c));
    int coins = 0;
    coins += abs(maxi - a);
    coins += abs(maxi - b);
    coins += abs(maxi - c);
    
    int rem_coins = n - coins;

    if(rem_coins < 0)
        cout << "NO" << endl;
    else if(rem_coins % 3 == 0)
        cout << "YES" << endl;
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