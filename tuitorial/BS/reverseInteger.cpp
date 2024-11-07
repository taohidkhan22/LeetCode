//Best Time to Buy and Sell Stock II

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int rverseInteger(int x) {
        
        int r=0;
        while(x){
            r= r*10+ x%10;
            if(r>INT_MAX/10|| r< INT_MIN/10) return 0; // To check 64 bit sign integer
                                                // if 32 bit sign integer then divided by 10; r>INT_MAX/10 || r< INT_MIN/10
            x=x/10;

        }
       return r;
    }
};
int main(){
    Solution s;
    int n;
    cin>>n;
    
   cout<< s.rverseInteger(n);
}