#include <iostream>
using namespace std;

void pad_left(char a[], int n)
{
	int length = 0;
    while (a[length] != '\0') {
        length++;
    }
    int dis = n - length;
    if (length >= n) return;
    else
    {
    	for (int i=dis;i<n;i++)
    	{
    		a[i] = a[i-dis];
    	}
    	for (int i=0;i<dis;i++) 
		{
			a[i] =' ';
		}
    }
    a[n] = '\0';
}
int main ()
{
	char a[] = "abcd";
	pad_left(a, 6);
	for (int i=0;i<6;i++) cout << a[i];
}
