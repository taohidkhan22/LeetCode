#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s1 = "", p, pattern, f;
    int j = 0;
    getline(cin, pattern);
    getline(cin, p);

    int h[256] = {0};
    vector<string> pickSentence;
    map<string, int> pk;

    // Extracting the sentence and map to zero
    for (int i = 0; i < p.length(); i++)
    {
        if (p[i] == ' ')
        {

            pk[s1] = 0;
            pickSentence.push_back(s1);
            // pk.insert(pair<string, int>(s1, 0));
            // pk.push_back(s1);
            s1.clear();
        }
        else
        {

            s1 += p[i];
        }
    }
    pk[s1] = 0;
    pickSentence.push_back(s1);
    if (pattern.size() != pickSentence.size())
    {
        return false;
    }
    for (int i = 0; i < pattern.size(); i++)
    {
        if (h[pattern[i]] != pk[pickSentence[i]])
        {
            return false;
        }
        h[pattern[i]] = i + 1;
        pk[pickSentence[i]] = i + 1;
    }
    return true;
}
