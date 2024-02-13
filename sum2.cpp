#include<bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> nums1, nums2;
  int n,m,a,b;
  cin>>n>>m;
  cout<<"enter nums1: ";
  for(int i=0;i<m;i++)
  {
    cin>>a;
    nums1.push_back(a);
  }
  cout<<"enter nums2 : ";
  for(int i=0;i<n;i++)
  {
    cin>>b;
    nums2.push_back(b);
  }

   for(int i=nums1.size() ,j=0 ; i< m+n ;i++,j++)
   {
            nums1.push_back(nums2[j]);

   }

  sort(nums1.begin(),nums1.end());

   for (int i = 0; i < nums1.size(); i++)
   {
      cout<< nums1[i]<<" ";
   }
   
  }

