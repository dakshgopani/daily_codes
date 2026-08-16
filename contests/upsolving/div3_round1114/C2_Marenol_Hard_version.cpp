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

    vector<int> ae, ao, be, bo;

    for(int i = 0; i < n; i++){
        if(a[i] == '1'){
            if(i % 2 == 0)
                ae.push_back(i);
            else
                ao.push_back(i);
        }
    }
    
    for(int i = 0; i < n; i++){
        if(b[i] == '1'){
            if(i % 2 == 0)
                be.push_back(i);
            else
                bo.push_back(i);
        }
    }

    if(ae.size() != be.size() || ao.size() != bo.size()){
        cout << -1 << endl;
        return;
    }

    ll ans = 0;

    for(int i = 0; i < ae.size(); i++)
        ans += abs(ae[i] - be[i]) / 2;
        
    for(int i = 0; i < ao.size(); i++)
        ans += abs(ao[i] - bo[i]) / 2;
    
    cout << ans << endl;
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