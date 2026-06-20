// https://codeforces.com/contest/977/problem/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    while(k != 0){
        int last_digit = n % 10;
        if(last_digit == 0)
            n /= 10;
        else
            n--;
        k--;
    }

    cout << n;
    
}