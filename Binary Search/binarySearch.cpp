#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
       bool binarySearch(vector<int> &a, int key){
        int l=0,h=a.size()-1,flag=0;
        while (l<=h)
        {
            int mid=(h+l)/2;
            if(key==a[mid]){
                cout<<a[mid]<<" Found the value"<<endl;
                flag=1;
                break;
            }
            else if(key>a[mid]){
                l=mid+1;
            }
            else{
                h=mid-1;
            }
           
        }
        cout<<l<<"   "<<h<<endl;
        if(flag==1){
            return 1;
        }
        else {
            return 0;
        }
             
       }
};


int main(){
    vector<int> v;
    int n; 
    cout << "enter the vector size : ";
    cin >> n;
    cout << "enter the vector : ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int key;cout<<"Enter the key:" ; cin>>key;
    Solution s;
    cout<<s.binarySearch(v,key)<<endl;
}