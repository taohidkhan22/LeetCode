#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string makeFancyString(string s) {
        string s2 = "";
        int d = 1;
        for (int i = 0; i < s.size(); i++) {

            if (s[i] == s[i + 1]) {
                d = d + 1;
            } else {
                d = 1;
            }
            cout << i << "...i...for...d " << d << endl;
            if (d < 3) {
                // cout<<d<<endl;
                s2 += s[i];
            }
        }
        return s2;
    }
};
int main()
{
    Solution sol;
    string s;
    getline(cin, s);
    cout<<sol.makeFancyString(s);
}