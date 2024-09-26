#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
   string addBinary(string a, string b)
    {

        string sum;
        
     
        if (a.size() < b.size())
            swap(a, b);
        while (b.size() < a.size())
        {
            b = "0" + b;
        }
        vector<string>v;
        cout<<"String a:  "<<a<<endl;
        cout<<"String b:  "<<b<<endl;

        char c = '0', s = '0';
         for (int i = a.size()-1; i >= 0; i--)
        {

            if ((a[i] == '0' && b[i] == '0'))
            {
                if (c == '0')
                {
                    
                    v.push_back(string(1,'0'));
                   
                }
                else
                {
                    v.push_back(string(1,'1'));
                    c='0';

                }
            }
            else if ((a[i] == '0' && b[i] == '1') || (b[i] == '0' && a[i] == '1'))
            {
               

                if (c == '0')
                {   
                   
                    v.push_back(string(1,'1'));
                    c='0';
                   
                }
                else
                {
                      v.push_back(string(1,'0'));
                      c = '1';
                }
            }
            else if ((a[i] == '1' && b[i] == '1'))
            {

                if (c == '0')
                {
                      v.push_back(string(1,'0'));
                      c = '1';
                }
                else
                {
                     v.push_back(string(1,'1'));
                    c = '1';
                }
            }
        }
        if(c=='1') v.push_back(string(1,'1'));
        string p="";
        reverse(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            // cout<<v[i];
            p+=v[i];
        }
        return p;

       
    }
    
};
int main()
{
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    Solution s;
    cout<< s.addBinary(s1, s2)<<endl;
   
     
}