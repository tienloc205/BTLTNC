/* Cho các số A và B, đếm số các số nguyên N sao cho A <= N <= B và N là một số đối gương.
*/
#include <iostream>
using namespace std;
bool Palindromes(int n){
	int res=0;
	int m=n;
	while (n){
		res=res*10+n%10;
		n/=10;
	}
	return (res==m)?true:false;
}
int main() {
	int a,b,t;
	cin >> t;
	while (t--){
		cin >> a >> b;
		int count=0;
		for (int i=a;i<=b;i++){
			if (Palindromes(i)) count++;
		}
		cout << count;
		cout << endl;
	}

}
