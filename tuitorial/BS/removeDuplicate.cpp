#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //vector<int>arr;
         cout<<nums.size()<<endl;
        int j=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]){
                  nums[j]=nums[i];
                  j++;
            }

        }
        cout<<nums.size()<<endl;
        for(int i=0;i<j;i++){
           cout<<nums[i]<<" ";
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

    s.removeDuplicates(arr);
}