#include <bits/stdc++.h>
using namespace std;
int main()
{
    //  std:: vector<string> h,n;
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    // h.push_back(s1);
    // for(int i=0;i<s1.size();i++){
    //     n.push_back(string(1,s1[i]));

    // }
    int j=0;
    for (int i = 0; i < s1.size(); i++)
    {
        if(s1[i]==s2[j]){

            j+=1;
            if(j==s2.size()){
                int k=i-j+1;

                cout<<"yes matched"<<"  "<<k<<endl;
                break;
            }
        }
        else{
            i=i-j;
            j=0;
        }
    }
}