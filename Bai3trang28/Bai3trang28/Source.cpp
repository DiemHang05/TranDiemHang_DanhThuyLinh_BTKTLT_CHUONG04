#include <iostream>
using namespace std;

// Hàm tính UCLN của hai số nguyên dương a và b
int ucln(int a, int b) {
	// Đảm bảo a và b đều là số nguyên dương
	if (a <= 0 || b <= 0) {
		cout << "a và b phải là số nguyên dương!" << endl;
		return -1; // Trả về -1 để chỉ báo lỗi
	}

	// Phương pháp Euclid để tính UCLN
	while (a != b) {
		if (a > b) {
			a = a - b;
		}
		else {
			b = b - a;
		}
	}
	return a; // Khi a == b thì a (hoặc b) là UCLN
}

int main() {
	int a, b;

	// Nhập giá trị cho a và b
	cout << "Nhập số nguyên dương a: ";
	cin >> a;

	cout << "Nhập số nguyên dương b: ";
	cin >> b;

	// Tính và in ra UCLN của a và b
	int ketQua = ucln(a, b);
	if (ketQua != -1) {
		cout << "UCLN(" << a << ", " << b << ") = " << ketQua << endl;
	}

	return 0;
}
