#include<bits/stdc++.h>
using namespace std;
class Solution{
public: 
      int romanToInt(string s)
      {
        int ans=0, l=s.length();
        cout<<l<<endl;
        map<char,int>m;
        m['I']=1; m['V']=5; m['X']= 10; m['L']=50; m['C']=100; m['D']=500;m['M']=1000;
        for(int i=0;i<=l+1;i++)
        {
            if(m[s[i-1]]<m[s[i]])
            {
                ans=ans-m[s[i-1]];
            //  cout<<"i............."<<i<<"......ans......."<<ans<<"...m[i-1]"<<m[s[i-1]]<<endl;
            }            
            else{
                ans +=m[s[i-1]];
                // cout<<"i............."<<i<<"......ans......."<<ans<<"......else...m[i-1]"<<m[s[i-1]]<<endl;
            }
        }
        
        return ans;



      }
};
int main()
{
   string s="LVIII";
   Solution ob;
   cout<<ob.romanToInt(s)<<endl;
}