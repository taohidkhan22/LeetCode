#include <bits/stdc++.h>
using namespace std;
void Gcd_Lcm(int &n1, int &n2)
{
  int r, temp1 = n1, temp2 = n2;
  while (n2 != 0)
  {
    r = n1 % n2;
    cout << "r= " << r << endl;
    n1 = n2;
    cout << "n1= " << n1 << endl;
    n2 = r;
    cout << "n2= " << n2 << endl;
  }
  cout << "GCD is: " << n1 << endl;
  cout << "LCM is:  " << (temp1 * temp2) / n1;
}
int main()
{
  int a = 60, b = 24;
  Gcd_Lcm(b, a);
}