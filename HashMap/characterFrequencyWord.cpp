#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void makeFancyString(string s)
    {

        int hash[256] = {0};
        for (int i = 0; i < s.size(); i++)
        {
            s[i]= tolower(s[i]);
            hash[s[i]]++;
        }

        for (int i = 0; i < 256; i++)
        {
            if (hash[i] > 0)
            {
                char a;
                a = i;
                cout << a << ".........." << hash[i] << endl;
            }
        }
    }
};
int main()
{
    Solution sol;
    string s;
    getline(cin, s);
    sol.makeFancyString(s);
}