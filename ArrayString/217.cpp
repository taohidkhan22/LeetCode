//Best Time to Buy and Sell Stock II

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int>mp; int flag=0;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto i:mp){
            if(i.second>1){
                flag=1;
                break;
            }
        }
        if(flag==1) return true;
        else return false;
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

   cout<< s.containsDuplicate(arr);
}



