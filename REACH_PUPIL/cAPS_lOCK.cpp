// https://codeforces.com/contest/131/problem/A
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    bool allUpper = true;

    for(auto it : s){
        if(it != toupper(it)){
            allUpper = false;
            break;
        }
    }

    bool restUpper = true;

    for(int i = 1; i < s.size(); i++){
        if(s[i] != toupper(s[i])){
            restUpper = false;
            break;
        }
    }

    string new_str = "";

    if(allUpper){
        for(auto it : s){
            char c = tolower(it);
            new_str += c;
        }
        cout << new_str;
    }
    else if(s[0] == tolower(s[0]) && restUpper){
        s[0] = toupper(s[0]);
        for(int i = 1; i < s.size(); i++){
            if(s[i] == toupper(s[i]))
                s[i] = tolower(s[i]);
        }
        cout << s;
    }
    else    
        cout << s;
}