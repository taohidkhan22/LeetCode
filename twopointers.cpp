#include<bits/stdc++.h>
using namespace std;
int twopointers(vector<int> & a, int size, int val)
{
   int i=0,j=size-1;
//    while (i<j)
//    {
//       if(a[i]+a[j]==val){return 1; break;}
//       else if (a[i]+a[j]<val){ i++; }
//       else {j--;}

//    } 
   for(int i=0;i<size;i++){cout<<a[i]<<"  ";}

}

int main()
{ 
    vector<int> a;
     cout<<"Enter the size of the vector: ";
    int n; cin>>n;
    
    cout<<"Enter the vector: ";
    for (int i = 0; i < n; i++)
    {
        int c;
        cin>>c;
        a.push_back(c);
    }
    sort(a.begin(),a.end());
//    cout<<(twopointers(a, a.size(), 7)? "True" : "False")  ;
   twopointers(a, a.size(), 7) ;
    
}