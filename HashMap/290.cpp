#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool wordPattern(string pattern, string s)
    {
    }
};
int main()
{
    string s = {"i lov i lov"};
    vector<string> v2;
    map<int,string> mp;
    string s1 = "";int j=0;
    for (int i = 0; i < s.size(); i++)
    {

        if (s[i] == ' ')
        {
            

            s1.clear();
            j++;
        }
        else
        {
         
               s1 += s[i];
               mp[j]=s1;
            
        }
    }
    for(auto i:mp){
          s=mp[i.second];
       
        cout<<i.first<<"    "<<i.second<<endl;
    }
}