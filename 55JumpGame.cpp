
// 121. Best Time to Buy and Sell Stock

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int i=0, n=nums.size(),reach;
        for (reach = 0; i < n && i <= reach; i++)
           { 

            //cout<<"Before max: ....Reach...."<<reach<<"....i+nums[i]..."<<i+nums[i]<<"...i..."<<i<<endl;
             reach = max(i + nums[i], reach);
             cout<<"After max: ....Reach...."<<reach<<"....i+nums[i]..."<<i+nums[i]<<"...i..."<<i<<endl;
           } 
        cout<<i<<" i and n "<<n<<endl;
        return i == n;
    }
};

int main()
{
    Solution sol;
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<"Max Profit is:   "<<sol.canJump(v)<<endl;
}