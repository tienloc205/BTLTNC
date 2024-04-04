#include <iostream>
using  namespace std;

void truncate(char a[], int n) 
{
	int length = 0;
    while (a[length] != '\0') {
        length++;
    }
    if (length<n) return;
    else
    {
    	for (int i=length-1;i>=n;i--) a[i] ='\0';
    }
}
int main ()
{
	char a[] = "abcd";
	truncate(a,2);
	for (int i=0;i<2;i++) cout << a[i];
}
