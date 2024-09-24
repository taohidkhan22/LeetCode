#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& a, int k) {
        int f=1;
        for(int i=0;i<a.size();i++)
        {
            for(int j=i+1;j<=k+i;j++)
            {
                if(a[i]==a[j])
                {
                    f=0;
                }

            }
        }
        if(f==1)
        {
            return false;
        }
        else  return true;
        
    }
};
int main()
{
    vector<int> v;
    int n; Solution s;
    cout << "enter the vector size : ";
    cin >> n;
    cout << "enter the vector : ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    cout << "enter the value k: ";
    int k;
    cin >> k;
    cout<< s.containsNearbyDuplicate(v, k)<<endl;
}