#include <bits/stdc++.h>
using namespace std;
vector<int> binarySearch(vector<int> &arr)
{
    // sort(arr.begin(),arr.end());
    int h = arr.size() - 1, l = 0, mid, flag = 1;
    while (l < h)
    {
        swap(arr[l], arr[h]);
        l++;
        h--;
    }
    return arr;
}
int main()
{
    int key;
    vector<int> arr;
    for (int i = 0; i < 5; i++)
    {
        int a;
        cin >> a;
        arr.push_back(a);
    }
    cout << "inital arraY: " << endl;
    for (auto i : arr)
    {
        cout << arr[i] << endl;
    }

    arr = binarySearch(arr);
    cout << "Reverse arraY: " << endl;
    for (auto i : arr)
    {
        cout << arr[i] << endl;
    }
}