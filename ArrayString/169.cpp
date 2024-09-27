#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int c1=1,c2=1,temp=nums[0];
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==nums[i-1])
            {
                c2=c2+1;
                if(c1<c2)
                {
                    temp=nums[i];
                    c1=c2;
                }
            }
            else
            {
                c2=1;
            }
        }
        return temp;
    }
};

int main()
{
    vector<int> v;
    cout<<"Enter the vector size: ";
    int n;cin>>n;
    cout<<"Enter the vector values: ";
    for(int i=0;i<n;i++){int key; cin>>key; v.push_back(key);}
    Solution sol;
    cout<<sol.majorityElement(v)<<endl;

}