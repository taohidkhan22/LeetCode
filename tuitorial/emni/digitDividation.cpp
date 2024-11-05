#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;vector<int> v;
    cin>>a;
    while(a)
    {
        int k=a%10;
        v.push_back(k);
        a=a/10;
    }
    for(int i=v.size()-1; i>=0 ;i--)
    {
        cout<<v[i]<<"  ";
        a=a+v[i];
    }
    cout<<"Sum of the the individual: "<<a<<endl;
}