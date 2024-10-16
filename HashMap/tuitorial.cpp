#include<bits/stdc++.h>
using namespace std;

int main() {
   string s1,s2;
   getline(cin,s1);
   vector<string>v;
   stringstream p(s1);
   while (p>>s2)
   {
       v.push_back(s2);
   }
   for(int i=0;i<v.size();i++){
    cout<<"v["<<i<<"]--"<<v[i]<<endl;
   }

}