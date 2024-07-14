#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int findKthLargest(vector<int> &v, int k)
    { 
        sort(v.begin(), v.end()); 
         cout<<" The sorted vector is : "<<endl;
        for (int i = 0; i < v.size(); i++)
        {
         
          cout<< v[i]<<"  ";
        }
        return v[k - 1];
    }
};
int main()
{
    Solution sol;
    vector<int> nums;
    int k, n;
    cout << "Enter the vector size: "; cin>>n;
    cout << "Enter the kth size: "; cin>>k;
    cout << "Enter the vector input: " << endl;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        nums.push_back(t);
    }
    cout << "The kth (" << k << ")  output is: " << sol.findKthLargest(nums, k);
}