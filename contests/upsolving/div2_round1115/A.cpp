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

    unordered_map<int, int> mp;
    int maxi = 0;

    for(auto it : arr){
        mp[it]++;
        maxi = max(maxi, mp[it]);
    }

    int remaining = n - maxi;
    int count = 0;

    int smallest = INT_MAX;

    for(auto it : mp){
        if(it.second == maxi)
            smallest = min(smallest, it.first);
    }

    int sum = accumulate(arr.begin(), arr.end(), 0);

    if(remaining >= maxi - 1) // take all
        count = sum;
    else{
        int res = max(0, maxi - remaining - 2);
        count = sum - res * smallest;
    }

    cout << count << endl;
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