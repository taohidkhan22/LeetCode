#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int maxProfit(vector<int> & nums)
    {
        int p=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]>nums[i-1])
            {
                int c=nums[i] - nums[i-1];
                p+=c;
                

            }
        }
        return p;

    }
};
int main()
{
    vector<int> nums;int n,b;
    cout<<"Enter the vector size: ";cin>>n;
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>b;
        nums.push_back(b);
    }
    Solution sol;
    cout<<"The maximum profit is: "<<endl;
    cout<<sol.maxProfit(nums)<<endl;

}
