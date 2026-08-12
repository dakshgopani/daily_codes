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
    int n, x, y;
    cin >> n >> x >> y;

    vector<int> arr(n);
    input(arr);

    int idx = -1;

    for(int i = 0; i < n; i++){
        bool valid = true;

        for(int j = max(0, i - x); j < i; j++){
            if(arr[j] <= arr[i])
                valid = false;
        }

        if(valid){
            for(int j = min(n - 1, i + y); j > i; j--){
                if(arr[j] <= arr[i])
                    valid = false;
            }
        }

        if(valid){
            idx = i + 1;
            break;
        }
    }

    cout << idx;
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