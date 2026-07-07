#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    string new_str = "";

    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B'){
            i += 3;
        }
        else{
            new_str += s[i];
        }
    }
}