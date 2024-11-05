#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    string s2="+8801";
    for(int i=0;i<s2.size();i++){
        if(s[i]!=s2[i]){
           cout<<"1 Not bd number"<<endl;
           break;
        }
    }
    cout<<s2.size()<< " "<<s[s2.size()]<<endl;
    if(s[s2.size()]=='7'||s[s2.size()]=='5'||s[s2.size()]=='9'||s[s2.size()]=='3'||s[s2.size()]=='8'){
       
    }
    else{
         cout<<"2 Not bd number"<<endl;
    }
    for(int i=s2.size()+1;i<s.size();i++){
        if(s[i]>='0' && s[i]<='9'){
           
        }
        else{
           cout<<"3 Not bd number"<<endl;
           break;
        }
    }




}
//+88017111122