// https://codeforces.com/problemset/problem/702/A
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    int count = 1;
    int maxi = 0;

    for(int i = 0; i < n - 1; i++){
        if(arr[i] < arr[i + 1])
            count++;
        else    
            count = 1;
        maxi = max(count, maxi);
    }

    if(n == 1) 
        maxi = 1;

    cout << maxi;
}