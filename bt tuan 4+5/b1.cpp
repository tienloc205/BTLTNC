/*Viết chương trình nhập một số nguyên dương N <= 10000
và một chuỗi gồm N số trong khoảng từ 1 đến N,
xác định xem trong chuỗi đó hai số nào bằng nhau hay không. Nếu có thì in ra “Yes”, nếu không thì in ra “No”.
Gợi ý (bôi đen để xem): */
#include <iostream>
using namespace std;

int main (){
    int n; cin >> n;
    int a[n];
    for (int i=0;i<n;i++ cin >> a[i];
    bool flags=false;

    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if (a[i]==a[j]){
                flags=true;
                cout << "Yes";
                break;
            }
        }
    }
    if (!flags) cout << "No";
}

