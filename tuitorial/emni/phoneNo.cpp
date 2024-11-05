#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
   
    regex pattern1(R"(^\+8801[3-9][1-9]{8}$)");
   
   
    regex pattern2(R"(^01[3-9][1-9]{8}$)");
    cout<<(regex_match(s, pattern1)||regex_match(s, pattern2))<<endl;




}
//+88017111122