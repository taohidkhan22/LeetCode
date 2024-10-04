#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<string> summaryRanges(vector<int> &nums)
    {
        int a, b;
        vector<string> s;
        for (int i = 0; i < nums.size(); i++)
        {
        }
    }
};
int main()
{
    Solution s;
    vector<int> nums;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    // s.summaryRanges(nums);
    int a = nums[0], temp, b;
    temp = a;
    for (int i = 1; i < nums.size(); i++)
    {

        if (nums[i] - 1 == nums[i - 1])
        {
            b = nums[i];
        }
        else
        {
            cout << "a :" << a << " b: " << b << endl;
            a = nums[i];

            
        }
    }
}