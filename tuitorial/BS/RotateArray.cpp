//Best Time to Buy and Sell Stock II

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int>v;
        for(int i=nums.size()-k;i<nums.size();i++){
             v.push_back(nums[i]);
        }
        for(int i=0;i<nums.size()-k;i++){
            v.push_back(nums[i]);
        }
        for(int i=0;i<v.size();i++){
            cout<<v[i]<< "  ";
        }
        
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
    int key;cin>>key;
    s.rotate(arr,key);
}