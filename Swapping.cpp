#include<iostream>

using namespace std;

int main() {
	int a, b;
	cout << "Nhap hai so tu nhien : ";
	cin >> a >> b;
	a = a + b;
	b = a - b;
	a = a - b;
	cout << "after swapping, a = " << a << ", b = " << b;
	return 0;
}