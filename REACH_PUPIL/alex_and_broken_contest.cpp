// https://codeforces.com/problemset/problem/877/A
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    
    bool ans = false;

    int cnt = 0;

    if(s.find("Danil") != string::npos) cnt++;
    if(s.find("Olya") != string::npos) cnt++;
    if(s.find("Slava") != string::npos) cnt++;
    if(s.find("Ann") != string::npos) cnt++;
    if(s.find("Nikita") != string::npos) cnt++;

    if(cnt == 1)
        cout << "YES";
    else
        cout << "NO";
}

// NO AC