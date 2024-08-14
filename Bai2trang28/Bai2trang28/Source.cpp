#include <iostream>
using namespace std;

// Hàm tính m^2
int tinhBinhPhuong(int m) {
	return m * m;
}

int main() {
	int m, n;

	// Nhập giá trị cho m và n
	cout << "Nhập số nguyên m: ";
	cin >> m;

	cout << "Nhập số nguyên dương n: ";
	cin >> n;

	// Kiểm tra giá trị của n
	if (n <= 0) {
		cout << "n phải là số nguyên dương!" << endl;
		return 1; // Kết thúc chương trình với mã lỗi
	}

	// Tính và in ra m^2
	int ketQua = tinhBinhPhuong(m);
	cout << "m^2 = " << ketQua << endl;

	return 0;
}
