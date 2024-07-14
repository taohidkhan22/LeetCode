#include<bits/stdc++.h>
using namespace std;
class solution
{
    public:
        int fibo(int n){
          
            if(n==1 || n==0 )
               return n;
            else
               return fibo(n-1) + fibo(n-2);

        }          
};

int main()
{
    solution sol;
     int x;
     cin>>x;
     for(int i=0;i<x;i++)
     {
            if(sol.fibo(i)%2==0)
            {
                cout<<"even: "<<sol.fibo(i)%2<<endl;
            }
            else
            {
                cout<<"odd: "<<sol.fibo(i)%2<<endl;

            }
     }
  


}