// 387. First Unique Character in a String
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        for (int i = 0; i < 3; i++)
        {
            cout << strs[i] << endl;
        }
    }
};
int main()
{
    Solution S;
    vector<string> s;
    for (int i = 0; i < 3; i++)
    {
        string s1;
        getline(cin, s1);
        s.push_back(s1);
    }
    cout << S.longestCommonPrefix(s);
}