// https://codeforces.com/contest/80/problem/A

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num){
  for(int i = 2; i * i <= num; i++){
    if(num % i == 0) return false; // no prime
  }
    return true; // yes prime
}

int main() 
{
  int n, m, i;
  cin >> n >> m;
  
  for(i = n + 1; i <= m; i++){
    if(isPrime(i)) break;
  }
  
  cout << (i == m ? "YES" : "NO");
}