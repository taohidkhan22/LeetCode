#include <bits/stdc++.h>
using namespace std;
class sol
{
public:
    double maximumSubArray(vector<int> &v, int k)
    {
       double sum = 0,maxSum=0;
        for (int i = 0; i < k; i++)
        {
            
            sum += v[i];
        }
       maxSum=sum;
        for (int i = k; i < v.size(); i++)
        {
            sum+= - v[i-k] + v[i];
            maxSum= max(sum,maxSum);
        }

        cout<<maxSum<<endl;
        double x= maxSum / k;
        return x;
    
    }
};

int main()
{

    vector<int> v;
    int n;
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
    sol s;
   cout<< s.maximumSubArray(v, k)<<endl;
}