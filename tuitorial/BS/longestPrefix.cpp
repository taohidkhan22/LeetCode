// 387. First Unique Character in a String
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        sort(strs.begin(),strs.end());string s="";
        string first=strs[0], last=strs[strs.size()-1];
        for(int i=0;i<min(first.size(),last.size());i++){
            if(first[i]!=last[i]) break;
            else {
                s+=first[i];
            }
        }
        return s;
    }
};
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