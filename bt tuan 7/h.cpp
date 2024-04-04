#include <iostream>
using namespace std;

void trim_right(char a[])
{
	int length = 0;
	while (a[length] != '\0')
	{
		length++;
	}
	while (a[length] == ' ' || a[length] == '\t' || a[length] == '\n' || a[length] == '\r')
	{
		length--;
	}
	a[length+1] = '\0';
}
int main ()
{
	char a[] = "abcd   ";
	trim_right(a);
	int length = 0;
	while (a[length] != '\0')
	{
		length++;
	}
	for (int i=0;i<length;i++) cout << a[i];
}
