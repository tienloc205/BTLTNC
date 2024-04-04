#include <iostream>
using namespace std;
#include <cmath>

int main()
{
    int n;
    cin >> n;
    for (int y=n;y>=1;y--)
    {
        for (int x=-n+1;x<=n-1;x++)
        {
            if (y+abs(x)<=n) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
}
