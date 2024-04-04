#include <iostream>
using namespace std;

int main()
{
    int x,y=-1;
    while (cin >> x)
    {
        if (x!=y)
        {
            y=x;
            if (y<0){
                cout << y;
                break;
            }
            else cout << y << " ";
        }
    }
}
