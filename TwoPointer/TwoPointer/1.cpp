#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int ,int >mp;
        for(int i=0;i<nums.size();i++){
            int a=nums[i], b=target-a;
            if(mp.count(b)) return {mp[b],i};
            else mp[a]=i;
        }
        return {};

    }
};
int main()
{
    vector<int> a;
    cout << "Enter the size of the vector: ";
    int n, k;
    cin >> n;

    cout << "Enter the vector: ";
    for (int i = 0; i < n; i++)
    {
        int c;
        cin >> c;
        a.push_back(c);
    }
    Solution s;
    cin >> k;
    vector<int> v = s.twoSum(a, k);
    cout << "The output is: " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
}
