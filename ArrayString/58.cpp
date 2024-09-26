#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int c = 0;
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] == ' ')
            {
                if(c==0){
                    continue;
                }
                else{
                    break;
                }
            }
            else
            {
                
                c += 1;
                cout<<"not null here "<<s[i]<<" c "<<c<<endl;
            }
        }
        return c;
    }
};
int main()
{
    string s;
    getline(cin, s);
    Solution p;
    cout << p.lengthOfLastWord(s);
}