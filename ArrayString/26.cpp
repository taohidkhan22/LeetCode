#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> v;
  int n,index=1;cin>>n;
  cout<<"enter the vector values:  ";
  for(int i=0;i<n;i++)
  {
    int key;cin>>key;
    v.push_back(key);
  }
  for(int i=1;i<v.size();i++)
  {
    if(v[i]!=v[i-1])
    {
      v[index]=v[i];
      index++;
    }
   
  }
  for(int i=0;i<index;i++)
  {
    cout<<v[i]<<" ";
  }
  
}