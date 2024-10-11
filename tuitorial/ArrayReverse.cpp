#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={1,4,3,7};
    int n= sizeof(a)/sizeof(a[0]);
    int l=0, r=n-1;
     cout<<"Actual ARRAY: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"  ";
    }
    cout<<endl<<l<<".........l"<<r<<".............r"<<endl;
 
    while(l<r)
    {
        swap(a[l],a[r]);
        l++;
        r--;
    }
    cout<<"Reversed ARRAY: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"  ";
    }
 
}