#include <iostream>
using namespace std;
class BaseClass
{
    int arr[10];
};
class DerivedBaseClass1: public virtual BaseClass { };  
class DerivedBaseClass2: public virtual BaseClass { };  

class DerivedClass : public DerivedBaseClass1, public DerivedBaseClass2
{
};
int main(void)
{
    cout << sizeof(DerivedClass);
    return 0;
}