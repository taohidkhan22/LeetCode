#include <bits/stdc++.h>
using namespace std;
class Addition
{
public:
    void display(int a, int b)
    {
        cout << a + b;
    }
};

int main()
{
    Addition ob;
    int a, b;
    cout << "Enter the tow number: ";
    cin >> a >> b;
    ob.display(a, b);
}