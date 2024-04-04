
/*Xâu đối xứng. Viết chương trình nhập từ bàn phím một xâu kí tự độ dài tối đa 100,
sau đó kiểm tra xem xâu kí tự đó có đối xứng hay không.
Chẳng hạn “abcba", “abba" là đối xứng, còn “abcda” không đối xứng. Nếu có thì in ra “Yes”, nếu không thì in ra “No”.
Gợi ý (bôi đen để xem): */
#include <iostream>
using namespace std;
#include <cstring>
int main (){
    string s;
    cin >> s;
    bool flag=true;
    int n=s.length();

    for (int i=0;i<n/2;i++){
        if (s[i]!=s[n-1-i]) flag=false;
    }

    cout << ((flag)? "Yes":"No");
}

