// https://codeforces.com/contest/1300/problem/A

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

    int pos_sum = 0, neg_sum = 0, zero_count = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] > 0)
            pos_sum += arr[i];
        else if(arr[i] < 0)
            neg_sum += arr[i];
        else    
            zero_count++;
    }

    int min_ops = zero_count;

    if(pos_sum + neg_sum + min_ops == 0)
        min_ops++;
    
    cout << min_ops << endl;
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