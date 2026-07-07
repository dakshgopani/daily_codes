#include<bits/stdc++.h>
using namespace std;

bool isGood(long long n){
    set<int> s;
    while(n != 0){
        int temp = n % 10;
        s.insert(temp);
        n /= 10;
    }
    return s.size() <= 2;  
}

int main(){
    int t;
    cin >> t;

    vector<long long> goodNums;

        for(long long y = 2; y <= 1000000; y++){
            if(isGood(y))
                goodNums.push_back(y);
        }

    while(t--){
        long long x;
        cin >> x;

        for(long long y : goodNums){
            if(isGood(x * y)){
                cout << y << "\n";  
                break;
            }
        }
    }
}