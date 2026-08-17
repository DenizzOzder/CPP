#include <iostream> // Kütüphane ekleme
using namespace std; // Standart isim alanını kullanma
// Yukarıdaki 2 kısım her projede olan standart keywordlerdir. Bu kısımları her projede kullanmak zorunludur.

int main()
{
	cout << "Hello World!" << endl; // Ekrana yazdırma işlemi ! endl ; komutu ile satır atlama işlemi yapılır.
	
	string isim; // Declaration | Tanımlama
	isim = "Deniz"; // string tipinde bir değişken tanımladık ve değer atadık.
	int yas = 25; // int tipinde bir değişken tanımladık ve değer atadık.
	cout << isim << " " << yas << endl; // Ekrana yazdırma işlemi
	return 0;
}
