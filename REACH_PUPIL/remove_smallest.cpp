// https://codeforces.com/problemset/problem/1399/A
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> arr(n);

        for(int i = 0; i < n; i++)
            cin >> arr[i];
        
        bool ans = true;
        sort(arr.begin(), arr.end());

        for(int i = 0; i < n - 1; i++){
            if(abs(arr[i] - arr[i + 1]) > 1)
                ans = false;
        }

        if(ans)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}