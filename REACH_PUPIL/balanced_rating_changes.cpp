#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    int count = 0;

    for(int i = 0; i < n; i++){
        int diff = arr[i] / 2;
        count += diff;

        while(count != 0){
            if(arr[i] % 2 == 1){
                if(diff + 1 == 0){
                    diff++;
                    count++;
                }
                else{
                    diff--;
                    count--;
                }
            }
        }

        cout << diff << endl;
    }
}