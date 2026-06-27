// https://codeforces.com/problemset/problem/978/A
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    vector<int> ans;
    set<int> seen;

    for(int i = n - 1; i >= 0; i--){
        if(seen.count(arr[i]) == 0){
            ans.push_back(arr[i]);
            seen.insert(arr[i]);
        }
    }

    reverse(ans.begin(), ans.end());

    cout << ans.size() << endl;

    for(int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
}