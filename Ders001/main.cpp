#include <iostream> // Kütüphane ekleme
using namespace std; // Standart isim alanını kullanma
// Yukarıdaki 2 kısım her projede olan standart keywordlerdir. Bu kısımları her projede kullanmak zorunludur.

int main()
{
	cout << "Hello World!" << endl; // Ekrana yazdırma işlemi ! endl ; komutu ile satır atlama işlemi yapılır.
	
	string isim; // Declaration | Tanımlama
	isim = "Deniz"; // string tipinde bir değişken tanımladık ve değer atadık.
	int yas = 25; // int tipinde bir değişken tanımladık ve değer atadık.
	cout << isim << " " << yas << endl << endl; // Ekrana yazdırma işlemi
	bool sinifiGectimi;
	float ortalama = 95.5f; // float tipinde bir değişken tanımladık ve değer atadık.
	double pi = 3.14159265358979323846; // double tipinde bir değişken tanımladık ve değer atadık.
	cout << "Ortalama: " << ortalama << "\nPi: " << pi << endl; // Ekrana yazdırma işlemi
	char notHarf = 65; // 65 => A harfine denk gelir.
	int not1 = 90;
	int not2 = 41;
	if (ortalama >= 50)
	{
		sinifiGectimi = true; // bool tipinde bir değişken tanımladık ve değer atadık.
		cout << "Sinifi gecti mi? " << sinifiGectimi << endl; // Ekrana yazdırma işlemi

	}
	else
	{
		sinifiGectimi = false; // bool tipinde bir değişken tanımladık ve değer atadık.
		cout << "Sinifi gecti mi? " << sinifiGectimi << endl; // Ekrana yazdırma işlemi
	}

	cout << "Ortalama = " << (float) (not1 + not2) / 2<< endl;
		return 0;
}
