#include <iostream>
using namespace std;

bool is_palindrome(char a[])
{
	int length = 0;
    while (a[length] != '\0') {
        length++;
    }
    for (int i=0;i<length/2;i++)
    {
    	if (a[i] != a[length-i-1]) return false;
    }
    return true;
}

int main ()
{
	char a[] = "abba";
	char b[] = "abcd";
	cout << is_palindrome(a) << endl;
	cout << is_palindrome(b) << endl;
}
