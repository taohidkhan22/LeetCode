// 121. Best Time to Buy and Sell Stock

#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
       int maxProfit(vector<int> &v)
       {
           int min=v[0], p1=0, p2=0;
           for(int i=0;i<v.size();i++){
               
               if(v[i]<min){
                 min=v[i];
               }
               p1= v[i]-min;
               if(p1>p2){
                p2=p1;
               }
                
              
           }
           return p2;

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