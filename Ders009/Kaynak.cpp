#include <iostream>
#include <windows.h>

using namespace std;
// 20 ile 40 arasındaki sayıların tüm bölenlerini bulan ve ekrana yazdıran program
int main() {
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	cout << "20 ile 40 arasındaki sayıların tüm bölenleri: " << endl;
	for (int i = 20; i <= 40;i++) {
		cout << i << " Sayısının Bölenleri: ";
		for (int j = 1; j <= i; j++) {
			if (i % j == 0) {
				cout << j << " ";
			}
		}
		cout << endl;
	}
}