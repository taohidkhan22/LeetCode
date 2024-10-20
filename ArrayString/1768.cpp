#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string mergeAlternately(string word1, string word2)
    {

        string res;
        int i = 0;
        while (i < word1.length() || i < word2.length())
        {

            if (i < word1.length())
            {
                res.push_back(word1[i]);
                //res += word1[i];
            }
            if (i < word2.length())
            {
                res.push_back(word2[i]);
               // res += word2[i];
            }
            i++;
        }
        return res;
    }
};
int main()
{
    string w1, w2, w3;

    getline(cin, w1);
    getline(cin, w2);
    Solution s;
    cout << s.mergeAlternately(w1, w2) << endl;
}