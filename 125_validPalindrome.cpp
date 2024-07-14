#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1="race a car", s2="taoheed-458";
    vector<string> v, r;
   // vector<string> v1={"taoheed"} , v2={"taohEed"};
    for(int i=0;i<s1.size();i++)
    {
        if(isupper(s1[i])||islower(s1[i])|| isdigit(s1[i]))
        {
              char c=s1[i];
              if(isupper(c))
              {
                c=tolower(c);
              }
              v.push_back(string(1,c));

        }
     
    }
    r=v;
    reverse(r.begin(), r.end());
    if(r==v){
        cout<<"Say palindrome"<<endl;
    }
    else{
        cout<<"not palindrome"<<endl;
    }
   
}