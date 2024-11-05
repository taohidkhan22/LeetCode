#include <bits/stdc++.h>
using namespace std;
void binarySearch(int arr[])
{
    int d = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < d; i++)
    {
        cout << arr[i] << endl;
    }
}
int main()
{
    int arr[50], key;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    binarySearch(&arr);
}