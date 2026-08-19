#include <iostream>
#include <locale>
using namespace std;


// Fonksiyon tanımı
// 
//int fonksiyonOrnek(int x) {  // Fonksiyonumuzu tanımladık.
//	return ((3 * x) + 2);
//}
//int main() {
//	int sayi1;
//	cout << "Bir sayı girin: ";
//	cin >> sayi1;
//	cout << "Fonksiyonun sonucu: " << fonksiyonOrnek(sayi1) << endl;
//	return 0;
//}

// Rand fonksiyon Örnek
// Bir fonksiyon yazılacak ve min ve max tamsayı parametre alacak ve bu min ve max arasında rastgele bir tamsayı döndürecek.

int randomNumber(int min, int max)
{
	int random = 0;
	random = min + (rand() % (max - min + 1));
	return  random;
}
int main()
{
	srand(time(NULL)); // Rastgele sayı üretimi için zaman tabanlı tohumlama bu kod sayesinde rand çalıştığında aynı değerleri üretmez.
	int min, max;
	cout << "Rastgele sayı üretmek için min ve max değerlerini girin: ";
	cin >> min >> max;
	cout << "Üretilen rastgele sayı: " << randomNumber(min, max) << endl;
	return 0;
}