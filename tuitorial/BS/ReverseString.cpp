#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void reverseString(vector<char>& s) { 
       int l=0, h=s.size()-1;
       while (l<h){
         swap(s[l],s[h]);
         l++;
         h--;

       }
       for(int i=0;i<s.size();i++){
        cout<<s[i]<<"  " ;

       }
    }
};
int main(){
    vector<char> s;
    for(int i=0;i<5;i++){
        char a;
        cin>>a;
        s.push_back(a);
    }
    Solution p;
    p.reverseString(s);
}