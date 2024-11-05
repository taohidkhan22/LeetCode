#include<bits/stdc++.h>
using namespace std;
int main(){
     
     int n,flag=0,i;
     cin>>n;
     for(i=2;i<= n/2;i++){
        if(n%i==0){
            
            flag=1;
            break;
        }
     }
     if(flag==1){
           cout<<"not prime"<<"...and divisible by : "<<i<<endl;
     }
     else{
              cout<<"prime"<<endl;
     }
   
}