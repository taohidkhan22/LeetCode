#include<bits/stdc++.h>
using namespace std;
class solution{

    public:
      bool isIsomorphic(string s1, string s2){
          int h1[256]={0},h2[256]={0};
          for(int i=0;i<s1.size();i++){
            if(h1[s1[i]]!=h2[s2[i]]) 
            {return false;}
            else{
                h1[s1[i]]=i+1;
            h1[s2[i]]=i+1;}
            
            
          }
          return true;

      }

};
int main(){
     
     solution s;
     string s1,s2;
     getline(cin,s1);
     getline(cin,s2);
     cout<<s.isIsomorphic(s1,s2)<<endl;
}