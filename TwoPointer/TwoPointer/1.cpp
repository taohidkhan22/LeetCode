

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    v.push_back(i);
                    v.push_back(j);
                    break;

                }

            }
        }
        return v;
    }
};
int main()
{ 
    vector<int> a;
     cout<<"Enter the size of the vector: ";
    int n,k; cin>>n;
    
    cout<<"Enter the vector: ";
    for (int i = 0; i < n; i++)
    {
        int c;
        cin>>c;
        a.push_back(c);
    }
    Solution s;
    cin>>k;
    s.twoSum(a,k);

  
    
}

