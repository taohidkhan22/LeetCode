#include<bits/stdc++.h>
using namespace std;
void displayString(string &s1, string &s2){
    vector<string> v1,v2;int j=0,k=0;
    for(int i=0;i<s1.size();i++)
    {
        v2.push_back(string(1,s1[i]));
    }
    for(int i=0;i <s1.size();i++)
    {
        for(j=k;j<s2.size();j++)
        {
            if(s1[i]==s2[j])
            {
                v1.push_back(string(1,s1[i]));
                k=j+1;
                cout<<"The if: "<<endl;
                cout<<"the value of i: "<<i<<endl;
                cout<<"the value of j: "<<j<<endl;
                cout<<"the value of k: "<<k<<endl;
                break;
            }
            // else
            // {
            //     cout<<"The else: "<<endl;
            //     cout<<"the value of i: "<<i<<endl;
            //     cout<<"the value of j: "<<j<<endl;
            // }
            
            
        }
        
    }
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<endl;
    }
 
    if(v1==v2){
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