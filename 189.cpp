#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v1={-1};
    
 
    cout<<"Enter key: "; int key,dif; cin>>key;
    int arr[v1.size()];
    dif=v1.size()-key;   
    cout<<"dif....."<<dif<<endl;  
    if(dif>0)   
    {
         for(int i=0;i<v1.size();i++)
      {
        //int a;cin>>a;
       // v1.push_back(a);
        // v2.insert(v2.begin()+ i, v1[i]);
        if(i<dif)
        {
            int j=key+i;
            // cout<<j<<" .....j.."<<"..........i......."<<i<<"...v1[i]..."<<v1[i]<<endl;
            arr[j]=v1[i];

    
           // v2.insert(v2.begin()+ j, v1[i]);
            //v2.insert(v2.begin() +i, v1[i]);
        }
        else{
            int k=i-dif;
            // cout<<k<<"......k.."<<"..........i......."<<i<<"...v1[i]..."<<v1[i]<<endl;
            arr[k]=v1[i];
            //v2.insert(v2.begin()+ k, v1[i]);
           // v2.insert(v2.begin() +i, v1[i]);
        }
    
        
    }


    }
   if(dif>0)
    {

   for(int i=0;i<v1.size();i++)
    {
        // v1.insert(v1.begin()+i,arr[i]);
        v1[i]=arr[i];
        cout<<v1[i]<<"   ";
    
        
    }
   }
   else{
    for(int i=0;i<v1.size();i++)
    {
        // v1.insert(v1.begin()+i,arr[i]);
        
        cout<<v1[i]<<"   ";
    
        
    }

    
   }
    
    


}