#include <iostream>
#include <cmath>
using namespace std;
bool Prime (int n )
{
    if (n<2) return false;
    for (int i=2;i<sqrt(n);i++)
    {
        if (!(n%i)) return false;
    }
    return true;
}

int main ()
{
  int n; cin >> n;
  cout << ((Prime(n))?"yes":"no");
}
