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
    int a, b, c;
    cin >> a >> b >> c;

    if(a == b || b == c || c == a){
        cout << 0 << endl;
        return ;
    }

    vector<int> v = {a, b, c};
    sort(v.begin(), v.end());

    cout << min(v[1] - v[0], v[2] - v[1]) << endl;
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