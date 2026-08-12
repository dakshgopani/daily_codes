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

    int count = 1;

    for(int i = 0; i < n - 1; i++){
        if(s[i] != s[i + 1])
            count++;
    }

    bool minusOne = false;
    bool minusTwo = false;

    for(int i = 1; i < n - 1; i++){
        if(s[i] != s[i + 1] && s[i] != s[i - 1]){

            if(s[i - 1] == s[i + 1]){
                minusTwo = true;
                break;
            }

            minusOne = true;
        }
    }

    if(minusTwo)
        count -= 2;
    else if(minusOne)
        count--;

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