#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    int a[n][n];
    int x;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            x=i+j+1;
            if (j>=n-i) a[i][j]=x-n;
            else a[i][j]=x;
        }
    }
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++) cout << a[i][j] << " ";
        cout << endl;
    }

}
