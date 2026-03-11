// https://codeforces.com/problemset/problem/1837/B

#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int t;
  cin >> t;
  
  while(t--){
    int n;
    cin >> n;
    
    string s;
    cin >> s;
    
    int maxL = 0, maxR = 0;
    int curr = 0;
    
    for(int i = 0; i < n; i++){
      if(s[i] == '<') curr++;
      else curr = 0;
      
      maxL = max(maxL, curr);
    }
    
    curr = 0;
    
    for(int i = 0; i < n; i++){
      if(s[i] == '>') curr++;
      else curr = 0;
      
      maxR = max(maxR, curr);

    }
    
    int ans = max(maxL, maxR) + 1;
    cout << ans << endl;
  }
}