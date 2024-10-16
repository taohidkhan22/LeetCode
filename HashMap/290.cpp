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

    string s1 = "", p,pattern, f;
    int j = 0;
   // getline(cin, pattern);
    getline(cin, p);

    // vector<string> pk;
    int h[256]={0};
    map<string, int >pk;

    for (int i = 0; i < p.length(); i++)
    {
        if (p[i] == ' ')
        {

            pk[s1]=0;
           // pk.insert(pair<string, int>(s1, 0));
            // pk.push_back(s1);
            s1.clear();
            
        }
        else
        {
            

            s1 += p[i];
         
        }
    }
     pk[s1]=0;
    // pk.push_back(s1);
   // pk.insert(pair<string, int>(s1, 0));
    cout << "the sentence: " << endl;
    for (auto i: pk)
    {
        
        cout <<i.first<<" - "<<i.second<< endl;
    }
  
}