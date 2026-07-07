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

        int change = 0;
        
        for(int i = 1 ; i < n ; i++){
            if(s[i] != s[i-1])
                change++;    
        }

        if(change == 0)
            cout << 1 << endl;
        else if(change == 1)
            cout << 2 << endl;
        else
            cout << 1 << endl;
    }
}

   