#include<bits/stdc++.h>
using namespace std;
void displayString(string &s1, string &s2){
    int j=0;
    for(int i=0;i<s2.size() and j<s1.size();i++){
        if(s1[j]==s2[i])
        {
            j++;
        }
    }
  
 
    if(j==s1.size()){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }

}
int main()
{  
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    displayString(s1,s2);
   
}