#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);

    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    sort(arr.begin(), arr.end());
    int sum = 0;
    int count = 0;

    for(int i = 0; i < n; i++){
        sum += arr[i];
        if(sum <= k)
            count++;
    }

    cout << count << endl;
    for(int )
}