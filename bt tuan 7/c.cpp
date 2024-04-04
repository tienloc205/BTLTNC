#include <iostream>
using namespace std;

void pad_right(char a[], int n)
{
	int length = 0;
    while (a[length] != '\0') {
        length++;
    }
    if (length >= n) return;
    else
    {
    	for (int i = n-1;i >= length;i--) a[i] = ' ';
    }
    a[n] = '\0';
}
int main ()
{
	char a[] = "abcd";
	pad_right(a,5);
	for (int i=0;i<5;i++) cout << a[i];
}
