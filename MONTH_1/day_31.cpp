// https://www.geeksforgeeks.org/problems/fractional-knapsack-1587115620/1

class Solution {
  public:
  
    static bool compare(pair<double, int> a, pair<double, int> b){
        return a.first > b.first;
    }
  
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
        // code here
        int n = val.size();
        
        vector<pair<double, int>> ratio(n);
        
        for(int i = 0; i < n; i++){
            double r = (double) val[i] / (double) wt[i];
            ratio[i] = make_pair(r, i);
        }
        
        sort(ratio.begin(), ratio.end(), compare);
        
        double ans = 0;
        
        for(int i = 0; i < n; i++){
            int idx = ratio[i].second;
            if(wt[idx] <= capacity){
                ans += val[idx];
                capacity -= wt[idx];
            }
            else{
                ans += ratio[i].first * capacity;
                capacity = 0;
                break;
            }
        }
        return ans;
    }
    
    
};
