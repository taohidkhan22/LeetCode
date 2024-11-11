// 387. First Unique Character in a String
#include <bits/stdc++.h>
using namespace std;
;
int main()
{
    Solution S;
    vector<string> s;
    for (int i = 0; i < 3; i++)
    {
        string s1;
        cin >> s1;
        s.push_back(s1);
    }
    cout << S.longestCommonPrefix(s);
}