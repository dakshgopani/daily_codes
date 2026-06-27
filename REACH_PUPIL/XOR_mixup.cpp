// https://codeforces.com/contest/1698/problem/A
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
        
        for(int i = 0; i < n; i++){
            cout << arr[i] << endl;
            break;
        }
    }
}