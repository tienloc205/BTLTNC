#include <iostream>
#include <cstring>
using namespace std;

void trim_left(char a[]) {
    int len = 0;
    while (a[len] != '\0') {
        len++;
    }

    int start = 0;
    while (a[start] == ' ' || a[start] == '\t' || a[start] == '\n' || a[start] == '\r') {
        start++;
    }

    for (int i = start; i < len; ++i) {
        a[i - start] = a[i];
    }

    a[len - start] = '\0';
}
int main ()
{
	char a[] ="    abcd";
	trim_left(a);
	int length = 0;
	while (a[length] != '\0')
	{
		length++;
	}
	for (int i=0;i<length;i++) cout << a[i];
}
