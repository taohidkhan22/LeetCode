#include<bits/stdc++.h>
using namespace std;
#include<map>
int main()
{
   map<char,int> m;char ch='a';
  
   for(int i=0;i<5;i++)
   { 
      char a;cin>>a;
      int b;cin>>b;
      m.insert(pair<char, int> (a,b));
   }
   cout<<m[ch]<<endl;
  //  map<char, int>:: iterator i;
   
  //  cout<<"Output of the problem : "<<endl;
  //  int a=0;char ch;
  //  for(i=m.begin();i!=m.end();i++)
  //  { 
  //   if(i->second > a)
  //   { 
  //     a= i->second;
  //     ch= i->first;
      
  //   }

    
  //  }
  //  cout<<a<<"........."<<ch<<endl;
  //  cout<<m[a]<<endl;
     
  //   cout<< m.size()<<endl;
   
   
}
