#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    int count = 0;

    if(m == n){
        cout << 0;
        return 0;
    }

    if(m % n == 0){
        while(m % 2 == 0){
            m /= 2;
            count++;
        }

        while(m % 3 == 0){
            m /= 3;
            count++;
        }
    }
    else
        count = -1;

    cout << count;
}