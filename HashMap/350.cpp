//350. Intersection of Two Arrays II
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

         vector<int>v;

        int i = 0, j = 0;
        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i] == nums2[j]) {
                v.push_back(nums1[i]);
                i++;
                j++;


            } else if (nums1[i] < nums2[j]) {
                i++;
            } else{
                j++;
            }
              
        }
    

        return v;
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
    vector<int> arr1;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr1.push_back(x);
    }

    s.intersect(arr,arr1);
}