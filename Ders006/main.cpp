#include <iostream>
using namespace std;

int main() {

	// Arrays
	int numbers[5] = { 1, 2, 3, 4, 5 };
	int array[] = { 10, 20, 30, 40, 50 }; // Farklı bir tanımlama şekli

	// Exercise

	/*
		Kullanıcıdan 4 adet sınav notu girilmesini iste,
		Bu 4 not dizi içerisinde tutulacak
		Dizideki notların ortalaması hesaplanacak
		Ortalama ekrana yazılacak
	*/

	//int notlar[4];
	//double toplam = 0, ortalama;
	//for(int i = 0; i < 4; i++)
	//{
	//	cout << "Lütfen " << i + 1 << ". sınav notunu giriniz: ";
	//	cin >> notlar[i];
	//	toplam += notlar[i];
	//	cout << endl;
	//}
	//cout << "Ortalama: " << toplam / 4 << endl;
	//return 0;

	// Exercise 2
	/*
		Kullanıcıdan 4 adet sınav notu
		Her sınav notunun genel ortalamaya farklı yüzdelerde ağırlıklarla katıldığını varsayacaz örnek:
		1. Sınav: %15
		2. Sınav: %25
		3. Sınav: %30
		4. Sınav: %40
		Bu ağırlıklar ayrı bir dizide tutulacak.
		Bu notların toplamı ve Ortalamasını ekrana bastırın.

	*/
	const int SIZE = 4;
	double notlar[SIZE];
	double agirliklar[SIZE] = { 0.15, 0.25, 0.30, 0.40 };
	double toplam = 0, ortalama = 0;

	for(int i = 0; i< SIZE; i++)
	{ 
		cout << "Lütfen " << i + 1 << ". sınav notunu giriniz: ";
		cin >> notlar[i];
		toplam += (notlar[i] * agirliklar[i]);
	}
	ortalama = toplam / 4;
	cout << "Ortalama: " << ortalama << endl;
	cout << "Toplam: " << toplam << endl;

}
