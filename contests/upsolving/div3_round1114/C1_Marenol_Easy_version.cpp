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

    string a, b;
    cin >> a >> b;

    int a_even = 0, a_odd = 0;

    for(int i = 0; i < n; i++){
        if(a[i] == '1'){
            if(i % 2 == 0)
                a_even++;
            else
                a_odd++;
        }
    }

    int b_even = 0, b_odd = 0;

    for(int i = 0; i < n; i++){
        if(b[i] == '1'){
            if(i % 2 == 0)
                b_even++;
            else        
                b_odd++;
        }
    }

    if(a_even == b_even && a_odd == b_odd)
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