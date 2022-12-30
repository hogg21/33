#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int f(int &a, int &b) {
	int c;
	c = a
	a = b;
	b = c;
}
int main(int argc, char** argv) {
	int a, b;
	
	cout << "a" << a;
	cin >> a;
	cout << "b" << b;
	cin >> b;
	f(a, b);
	cout << "Обмен значений:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
	
	return 0;
}
