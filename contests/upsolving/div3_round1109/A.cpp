// https://codeforces.com/contest/2244/problem/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        string s;
        cin >> s;
        
        int count = 0;
        int maxi = 0;

        for(int i = 0; i < n; i++){
            if(s[i] == '#'){
                count++;
                maxi = max(maxi, count);
            }
            else
                count = 0;
        }

        cout << (maxi + 1) / 2 << endl;
    }
}