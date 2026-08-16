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

    string s;
    cin >> s;

    for(int i = 0; i < n - 1; i++){
        if(s[i] != s[i + 1]){
            cout << "YES" << endl;
            cout << s[i] <<  s[i + 1] << endl;
            return;
        }
    }

    cout << "NO" << endl;

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