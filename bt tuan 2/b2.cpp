#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    int n; cin >> n;
    for (int y=n;y>=1;y--)
    {
        for (int x=n;x>=1;x--) cout << ((x<=y)?"*":" ");
        cout << endl;
    }
}
