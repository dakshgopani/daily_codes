#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, c;
        cin >> n >> c;

        vector<int> a(n);

        for(int i = 0; i < n; i++)
            cin >> a[i];

        vector<int> b(n);
        
        for(int i = 0; i < n; i++)
            cin >> b[i];
        
        bool anySmall = false;

        for(int i = 0; i < n; i++){
            if(a[i] < b[i]){
                anySmall = true;
                break;
            }
        }

        int count = 0;
        int cost = INT_MAX;

        // without sorting
        if(!anySmall){
            cost = 0;
            for(int i = 0; i < n; i++)
                cost += a[i] - b[i];
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        count += c;

        bool done = false;

        for(int i = 0; i < n; i++){
            if(a[i] < b[i])
                done = true;
            
            count += (a[i] - b[i]);
        }

        int ans = min(cost, count);

        if(done)
            cout << -1 << endl;
        else 
            cout << ans << endl;
    }
}