//https://codeforces.com/contest/2247/problem/A

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
        
        int plus_one = 0;
        int minus_one = 0;

        for(auto it : arr){
            if(it == 1)
                plus_one++;
            else 
                minus_one++;
        }

        int sum = plus_one - minus_one;

        if(sum % 4 == 0)
            cout << "YES" << endl;
        else    
            cout << "NO" << endl;
    }
}