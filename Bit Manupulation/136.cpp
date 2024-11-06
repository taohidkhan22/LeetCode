#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(int nums[]) {
        map<int,int>mp;
        // for (int i=0;i<nums.size();i++){
        //     mp[nums[i]]++;
        // }
        for(auto i: mp){
            if(i.second==1){
                return i.first;
            }
        }
        return 1;
    }
    
};
int main(){
    Solution s;
    int arr[]={1,5,6,6};
    
    s.singleNumber(arr);
}