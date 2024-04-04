//Xoa ki tu

#include <iostream>
using namespace std;

void delete_char(char a[], char c, int &length)
{
	length = 0;
    while (a[length] != '\0') {
        length++;
    }
    
	for (int i=0;i<length;i++)
	{
		if (a[i] == c)
		{
			for (int j = i;j<length-1;j++) 	
			{
				a[j] = a[j+1];
			}
			length--;
		}
	}
}
int main ()
{
	char a[] = "abcgossbasfn";
	int length;
	delete_char(a,'b', length);
	for (int i=0;i<length;i++) cout << a[i];
}
