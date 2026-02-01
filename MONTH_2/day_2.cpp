// https://codeforces.com/problemset/problem/1883/B

#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int t;
  cin >> t;
  
  while(t--){
    int n, k;
    cin >> n >> k;
    
    string s;
    cin >> s;
    
    unordered_map<char, int> freq;
    
    for(int i = 0; i < n; i++){
      freq[s[i]]++;
    }
    
    if(n == 1 && k == 0){
      cout << "YES" << endl;
      continue;
    }
    
    int oddCount = 0;
    
    for(auto it: freq){
      if (it.second % 2 == 1){
        oddCount++;
      } 
    }
    
    if(oddCount <= k + 1) cout << "YES" << endl;
    else cout << "NO" << endl;
    
  }
}