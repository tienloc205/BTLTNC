// dao xau
#include <iostream>

void reverse(char a[]) {
    int length = 0;
    while (a[length] != '\0') {
        length++;
    }

    for (int i = 0; i < length / 2; i++) {
        char temp = a[i];
        a[i] = a[length - i - 1];
        a[length - i - 1] = temp;
    }
}

int main() {
    char arr[] = "Hello";
    std::cout << "Original array: " << arr << std::endl;

    reverse(arr);

    std::cout << "Reversed array: " << arr << std::endl;

    return 0;
}
