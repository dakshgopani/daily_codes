// https://codeforces.com/problemset/problem/507/A
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
    int n, k;
    cin >> n >> k;
    
    vector<pair<int,int>> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i].first;      
        arr[i].second = i + 1;    
    }

    sort(arr.begin(), arr.end());

    int count = 0;
    vector<int> ans;

    int i = 0;

    while(i < n && k != 0){
        if(arr[i].first <= k){
            count++;
            k -= arr[i].first;
            ans.push_back(arr[i].second);
        }

        i++;
    }

    cout << count << endl;
    output(ans);
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