//35. Search Insert Position

#include<bits/stdc++.h>
using namespace std;
/**
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        // vector<long long int> v;
        // for (long long int i = 1; i<=n; i++) {
        //     v.push_back(i);
        // }
        long int l = 1 , h = n, mid,key;
        while (l <= h)
         {
            mid = (l + h) / 2;
            if (guess(mid) == 0)
            {
                key=mid;
                break;
            } 
            else if (guess(mid) == -1)
             {
                h = mid - 1;
            } 
            else {
                l = mid + 1;
            }
        }
    
        return key;

     
        
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