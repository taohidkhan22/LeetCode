#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[]={1,1,5,4,4,6,1,6,5},c=0;

    int j= sizeof(a)/sizeof(a[0]);
    int hashh[10000000]={0};
   
    for(int i=0;i<j;i++){
         
          hashh[a[i]]+=1;
    }
    for(int i=0;i<j;i++){
        if(hashh[i]>0){
            c+=1;
            cout<<i<<"'s frequency is : "<<hashh[i]<<endl;
        }
    }
    cout<<"The number of unique value is: "<<c<<endl;

    
}