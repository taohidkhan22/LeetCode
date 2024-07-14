#include<bits/stdc++.h>
using namespace std;
int addDigit(int n)
{
    int s=0;
    while(n){
        s+=n%10;
        n=n/10;
    }
    if(s>9) return addDigit(s);
    else return s;
}
int main()
{
    cout<<addDigit(38)<<endl;
}