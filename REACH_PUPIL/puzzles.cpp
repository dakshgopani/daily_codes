#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    vector<int> arr(m);

    for(int i = 0; i < m; i++)
        cin >> arr[i];
    
    int mini = INT_MAX, maxi = INT_MIN;

    for(int i = 0; i < n; i++){
        mini = min(mini, arr[i]);
        maxi = max(maxi, arr[i]);
    }

    cout << (maxi - mini) << endl;
}