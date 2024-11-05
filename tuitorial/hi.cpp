#include <bits/stdc++.h>
using namespace std;
void binarySearch(vector<int>&arr, int n, int key)
{
    //sort(arr.begin(),arr.end());
    int h=n-1, l=0, mid,flag=1;
    while (l<h)
    {
        mid=(l+h)/2;
        cout<<mid<<endl;
        if(arr[mid]==key){
            flag=0;
            break;
        }
        else if(arr[mid]>key){
            h=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    if(flag==1){
        cout<<"not found the key"<<endl;
    }
    else{
        cout<<arr[mid]<<" found the value in "<<mid<<" th index"<<endl;
    }
}
int main()
{
    int key; vector<int>arr;
    for (int i = 0; i < 5; i++)
    { 
        int a;
        cin>>a;
        arr.push_back(a);
    }
   
    int d=arr.size();
    cin>>key;
    binarySearch(arr, d, key);
}