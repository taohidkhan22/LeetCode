//387. First Unique Character in a String
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        int h[26]={0};
        for(int i=0;i<s.size();i++){
            h[s[i]-'a']++;
        }
        for(int i=0;i<s.size();i++){
            if(h[s[i]-'a']==1){
                return i;
                break;
            }
        }
        return -1;
    }
};
int main(){
    Solution S;
    string s;
    getline(cin,s);
    cout<<S.firstUniqChar(s);
}