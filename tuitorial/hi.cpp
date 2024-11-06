#include <bits/stdc++.h>
using namespace std;
void gcd(int  &a,int &b)
{
    int r, t1=a,t2=b;
    while(r!=0){
         r=a%b;
         a=b;
         b=r;
    }
    cout<<a<<endl;
    cout<<"LCM: "<<(t1*t2)/a<<endl;
   
   
}
int main()
{
    int a=60, b=12;
    gcd(a,b);
}