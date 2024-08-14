#include <iostream>
using namespace std;

// Hàm tính giá trị phần tử thứ n của cấp số cộng
int giaTriPhanTu(int a, int r, int n) {
	// Kiểm tra n có hợp lệ không
	if (n < 1) {
		cout << "n phải là số nguyên dương!" << endl;
		return -1; // Trả về -1 để chỉ báo lỗi
	}

	// Trường hợp cơ sở: n = 1
	if (n == 1) {
		return a;
	}

	// Trường hợp đệ quy: n > 1
	return giaTriPhanTu(a, r, n - 1) + r;
}

int main() {
	int a, r, n;

	// Nhập giá trị cho a, r, và n
	cout << "Nhập hạng đầu a: ";
	cin >> a;

	cout << "Nhập công sai r: ";
	cin >> r;

	cout << "Nhập chỉ số phần tử n: ";
	cin >> n;

	// Tính và in ra giá trị phần tử thứ n của cấp số cộng
	int ketQua = giaTriPhanTu(a, r, n);
	if (ketQua != -1) {
		cout << "Giá trị phần tử thứ " << n << " của cấp số cộng là: " << ketQua << endl;
	}

	return 0;
}
