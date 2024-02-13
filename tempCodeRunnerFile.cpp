#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a;
    int val, n;
    cout<<"enter the vector size : ";
    cin>>n;
    cout<<"Enter the values of vector: ";
    for(int i=0;i<n ; i++)
    {
        int b;cin>>b;
        a.push_back(b);

    }
    cout<<"Enter the value to be deleted: ";
    cin>>val;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]==val)
        {
            a.erase(a.begin()+i);
        }
    }
    cout<<a.size()<<",";

    for(int i=0; i < a.size();i++)
    {
        
        cout<<a[i]<<" ";
    }
    
}
