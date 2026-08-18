#include <iostream>
using namespace std;

int main() {
	string isim;
	int uzunKenar, kisaKenar, alan;
	cin >> isim;
	cout << "Merhaba " << isim << endl;

	cout << "Dikdörtgen Alan hesaplama programına hoş geldiniz!" << endl;
	cout << "Lütfen dikdörtgenin uzun kenarını giriniz: ";
	cin >> uzunKenar;
	cout << "Lütfen dikdörtgenin kısa kenarını giriniz: ";
	cin >> kisaKenar;
	alan = uzunKenar * kisaKenar;
	cout << "Dikdörtgenin alanı: " << alan << endl;

	return 0;
}