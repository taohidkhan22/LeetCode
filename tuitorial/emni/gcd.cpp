#include<bits/stdc++.h>
using namespace std;
void Gcd_Lcm(int &n1, int &n2)
{
   int r, temp1=n1,temp2=n2;
   while(n2!= 0)
   {
    r=n1%n2;
    n1=n2;
    n2=r;
   }
   cout<<"GCD is: "<<n1<<endl;
   cout<<"LCM is:  "<<(temp1*temp2)/n1;
}
int main()
{
    int a=60, b=24;
    Gcd_Lcm(b,a);
}