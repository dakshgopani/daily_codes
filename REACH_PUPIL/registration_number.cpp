// https://codeforces.com/problemset/problem/4/C
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    unordered_map<string, int> users;

    for(int i = 0; i < n; i++){
        string s;
        cin >> s;

        if(users.find(s) == users.end()){ // s does not exist
            users[s] = 1;
            cout << "OK" << endl;
        }
        else{
            cout << s << users[s]++ << endl;
        }
    }
}