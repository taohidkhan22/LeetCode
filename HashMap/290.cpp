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
   
    string s1 = "",p,f;
    int j = 0;
  
    map<int, string> mp;
    

     getline(cin,f);
       getline(cin,p);
    map< string,int>pk;
    map< char ,int>pk2;
    for(int i=0;i<p.length();i++){
        if(p[i]==' '){

             pk.insert( pair< string,int>(s1,j));
             s1.clear();
             j++;

        }
        else{

            s1+=p[i];
        }
       
    } pk.insert( pair< string,int>(s1,j));

    for(int i=0;i<f.size();i++){

            pk2.insert( pair< char,int>(f[i],i));
    }
   for(auto i : pk){
        cout<<i.first<<" - "<<i.second<<endl;

       
    }
    

    for(auto i : pk2){
        cout<<i.first<<" - "<<i.second<<endl;

       
    }
    
}