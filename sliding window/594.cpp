#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findLHS(vector<int> &nums)
    {

        unordered_map<int, int> mp;
        for (auto i : nums)
        {
            mp[i]++;
        }
        int res = 0;
        for (auto i : mp)
        {

            if (mp.count(i.first - 1) > 0)
            {
                res = max(res, i.second + mp[i.first - 1]);
            }
        }

        return res;
    }
};

int main()
{

    vector<int> v;
    Solution s;
    int n;
    cout << "enter the vector size : ";
    cin >> n;
    cout << "enter the vector : ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    cout << s.findLHS(v) << endl;
}