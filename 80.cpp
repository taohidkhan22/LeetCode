#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> v;
  int n,index=1;cin>>n; int c1=1;
  cout<<"enter the vector values:  ";
  for(int i=0;i<n;i++)
  {
    int key;cin>>key;
    v.push_back(key);
  }
  for(int i=1;i<v.size();i++)
  {
    if(v[i]!=v[i-1] )
    {
      v[index]=v[i];
      c1=1;
      index++;
    }
    else if(v[i]==v[i-1] && c1<2)
    {
        v[index]=v[i];
        index++;
        c1+=1;
    }
    else{
        continue;
    }
    
   
  }
  for(int i=0;i<index;i++)
  {
    cout<<v[i]<<" ";
  }
  
}