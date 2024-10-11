#include<bits/stdc++.h>
using namespace std;
int main(){
    Solution s;
    vector<int> v;

    s.twoSum(v={2,5,3}, 3);
}
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        unordered_map<int,int> mp;     
        for(int i=0;i<nums.size();i++){
            int a=nums[i], b=target-a;
            if(mp.count(b)) return {mp[b],i};
            else mp[a]=i;
        }
      return {};
    }
};