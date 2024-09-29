#include <bits/stdc++.h>
using namespace std;
int main()
{

    map<char, int> m1, m2;
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    unordered_map<char, char> mp;
    
    for (int i = 0; i < s1.size(); i++)
    {
        mp.insert(pair<char, char>(s1[i], s2[i]));
    }

    for (auto i : mp)
    {
        cout << i.first << " " << i.second << endl;
    }
}