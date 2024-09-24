#include <bits/stdc++.h>
using namespace std;
void binaryToDecimal(int &a)
{
     vector<int> nums;
    if (a == 0)
    {
        cout << a << endl;
    }
    else
    {
        while (a > 0)
        {
            int k = a % 2;
            nums.push_back(k);
            a = a / 2;
        }
    }
    for(int i=nums.size()-1; i>=0;i--)
    {
        cout<<nums[i];
    }
}

int main()
{
    int a;
    cin >> a;
    binaryToDecimal(a);
   
}