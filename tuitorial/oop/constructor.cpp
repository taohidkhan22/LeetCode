#include <bits/stdc++.h>
using namespace std;
// class student{
//     int roll;
//     string name;
//     public:
//     student();

// };

// student:: student(){
//         cin>>roll;
//         cout<<roll;
//     }

// int main(){
//     student s;

// }

class base
{
    int arr[10];
};

class b1 : virtual public base
{
};

class b2 : virtual public base
{
};

class derived : public b1, public b2
{
};

int main(void)
{
    cout << sizeof(derived);
    getchar();
    return 0;
}
