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

        string res = "";

        for(int i = 0; i < n - 1; i++){
            if(s[i] == '1' && s[i + 1] == '1')
                res += '-';
            else if(s[i] == '1' && s[i + 1] == '0')
                res += '+';
            else if(s[i] == '0' && s[i + 1] == '0')
                res += '+';
            else 
                res += '+';
        }

        cout << res << endl;
    }
}