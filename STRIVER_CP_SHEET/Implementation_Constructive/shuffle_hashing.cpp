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
    string p;
    cin >> p;

    string h;
    cin >> h;

    if(p.size() > h.size()){
        cout << "NO" << endl;
        return;
    }

    unordered_map<char, int> mp;

    for(auto it : p)
        mp[it]++;
    
    bool ans = false;
    
    for(int i = 0; i + p.size() <= h.size(); i++){
        if(mp.find(h[i]) != mp.end()){
            unordered_map<char, int> temp;

            for(int j = i; j < i + p.size(); j++)
                temp[h[j]]++;
            
            if(mp == temp)
                ans = true;
        }
    }

    if(ans)
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