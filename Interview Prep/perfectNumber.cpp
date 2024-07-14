#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkPerfectNumber(int num) {
        long int i=1, sum=0;
        while(num>i){
            if(num%i==0)
            {
                sum=sum+i;
            }
            i++;
        }
        if(sum==num){
            return true;
        }
        else
          return false;
        
    }
};
int main()
{
    Solution sol;
    int n;
    cin>>n;
    cout<< sol.checkPerfectNumber(n)<<endl;
}