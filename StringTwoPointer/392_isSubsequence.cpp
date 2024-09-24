#include<bits/stdc++.h>
using namespace std;
void displayString(vector<string> &v){
    for(int i=0;i<v[0].size();i++)
    {
        cout<<v[0][i]<<endl;
    }

}
int main()
{  
    string s1,s2;

    vector<string>v1,v2;
    getline(cin,s1);
    v1.push_back(s1);
    //displayString(v1);
    for(int i=0;i<5;i++){
        char c;
        cin>>c;
        v2.push_back(string(1,c));
    }
    for(int i=0;i<5;i++){
        cout<<v2[i]<<endl;
    }
}