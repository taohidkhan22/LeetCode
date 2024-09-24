// you are given a list of minutes to perform some tasks such as [2, 6, 3, 4, 1, 7, 2]. 
//what least time will it take if two workers work in parallel and perform those tasks in sequential order?


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={2,6,3,4,1,7,2};
    int k,sum=0;
  
    k= sizeof(a)/sizeof(a[0]);

    for(int i=0;i<k;i++)
    {
  
        sum+=a[i];
    }
    cout<<sum<<endl;
  
    if(sum%2==0)
    {
        cout<<sum/2<<endl;
    }
    else
    {
        cout<<sum/2 +1<<endl;
    }
}