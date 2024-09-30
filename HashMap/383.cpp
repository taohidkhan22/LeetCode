#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    int hash1[26] = {0}, hash2[26] = {0}, flag = 1;

    for (int i = 0; i < s1.size(); i++)
    {

        hash1[s1[i] - 'a'] += 1;
    }

    for (int i = 0; i < s2.size(); i++)
    {

        hash2[s2[i] - 'a'] += 1;
    }
    for (int i = 0; i < 26; i++)
    {

        if (hash1[i] > 0)
        {
            if (hash1[i] > hash2[i])
            {
                flag = 0;
            }
            cout << "hash1 i: " << i << " " << hash1[i] << endl;
            cout << "hash2 i: " << i << " " << hash2[i] << endl;
        }
    }
    if (flag == 0)
    {
        cout << false << endl;
    }
    else
        cout << true << endl;
}