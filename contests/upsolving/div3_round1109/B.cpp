#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<long long> arr(n);

        for(int i = 0; i < n; i++)
            cin >> arr[i];

        long long extra = 0;
        bool ans = true;
        long long current_book_count = 0;

        for(int i = 0; i < n; i++){
            current_book_count = arr[i] + extra;

            if(current_book_count < i + 1){
                ans = false;
                break;
            }
            else{
                extra = current_book_count - (i + 1);
            }
        }

        if(ans)
            cout << "YES" << endl;
        else    
            cout << "NO" << endl;
    }
}