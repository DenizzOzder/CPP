/*
	C++ Tamamlayıcı Kodlama Egzersizi

	Kullanıcıdan 3 adet sınav notu alınız ( Tam sayı olacak )
	Daha sonra bu notların ortalamasını hesaplayıp 2 şekilde ekrana basılsın;
	1) Double olarak küsüratlı ( Hassasiyet 2 basamak )
	2) Tam sayı olarak küsüratsız ( Yuvarlama işlemi yapılacak )

*/
#include <iomanip>
#include <iostream>
using namespace std;
int main() {
	int not1, not2, not3,ortalama;
	cout << "1. Sınav Notu: ";
	cin >> not1;
	cout << "2. Sınav Notu: ";
	cin >> not2;
	cout << "3. Sınav Notu: ";
	cin >> not3;

	ortalama = (float) (not1 + not2 + not3) / 3;

	cout << "Ortalama (Küsüratlı): " << fixed << setprecision(2) << (float)ortalama << endl;
	cout << "Ortalama (Küsüratsız): " << fixed << setprecision(0) << round(ortalama) << endl;
	return 0;
}