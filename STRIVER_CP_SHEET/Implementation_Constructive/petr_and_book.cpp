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

    vector<int> arr(7);
    input(arr);

    int sum = 0;
    int i = 0;
    int latest_index = -1;

    while(sum < n){
        sum += arr[i];
        latest_index = i;
        i = (i + 1) % 7;
    }

    cout << latest_index + 1;
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