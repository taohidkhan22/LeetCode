#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2="";
    getline(cin,s1);
    int flag=0;
    for(int i=s1.size()-1,j=0;i>=0;i--)
    {
        s2+=s1[i];
        

    }
    if(s1==s2){
        cout<<1<<endl;
    }
    else {
        cout<<0<<endl;
    }
    

}