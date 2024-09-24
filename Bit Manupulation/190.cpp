#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
       uint32_t Bits(uint32_t n) {
        long long int r,s=0, p=31;
        cout<<"the number is ::: "<<n<<endl;
        while(n!=0){
             r=n%2;
             n=n/2;
             s= s+ r*  pow(2,p);
             p--;

        }
        return s;
    }
};
int main(){
    unsigned int n;
    cin>>n;
    solution p;
   cout<< p.Bits(n)<<endl;

}