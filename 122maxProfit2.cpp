
//122. Best Time to Buy and Sell Stock II
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
       int maxProfit(vector<int> &v)
       {
           int p1=0;
           for(int i=1;i<v.size();i++){
               
              if(v[i]>v[i-1]){
                int x= v[i]-v[i-1];
                p1+=x;
              }
                
              
           }
           return p1;

       }
};
int main()
{
    Solution sol;
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<"Max Profit is:   "<<sol.maxProfit(v)<<endl;
}