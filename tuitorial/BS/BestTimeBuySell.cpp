//Best Time to Buy and Sell Stock II

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        for(int i=1;i<prices.size();i++){
            if(prices[i]>prices[i-1]){
                profit=profit+(prices[i]-prices[i-1]);
            }
        }
        return profit;
    }
};
int main(){
    Solution s;
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }

   cout<< s.maxProfit(arr);
}