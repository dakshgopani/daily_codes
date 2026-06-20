#include<bits/stdc++.h>
using namespace std;

long long fib(long long n, long long a, long long b){
    if(n == 0)
        return a;
    
    if(n == 1)
        return b;
    
    return fib(n - 1, a, b) ^ fib(n - 2, a, b);
}

int main(){
    long long t;
    cin >> t;

    while(t--){
        long long a, b, n;
        cin >> a >> b >> n;

        cout << fib(n, a, b) << endl;

    }
}