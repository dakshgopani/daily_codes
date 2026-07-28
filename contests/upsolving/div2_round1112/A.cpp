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

    vi arr(n);
    input(arr);

    int L = INT_MAX;
    int R = INT_MIN;

    for(int i = 0; i < n; i++){
        if(i % 2 == 0)
            L = min(L, arr[i]);
        else
            R = max(R, arr[i]);
    }
        
    if(n % 2 == 1){
        cout << "NO" << endl;
        return;
    }
            
    if(L - 1 > R)
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