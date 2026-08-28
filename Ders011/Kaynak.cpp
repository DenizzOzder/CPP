#include <iostream>
using namespace std;

int main() {
	// Pointerlar

	int x = 10; // X isminde **** adresli ve 10 içeriğine sahip.
	int* ptr = &x; // ptr isminde bir pointer oluşturduk ve x'in adresini atadık.
	// Pointer içinde adres tutan yapıdır.
	cout << "Pointer Adresi: " << ptr << endl; // Pointerın adresini yazdırır.
	cout << "Pointerın Gösterdiği Değer: " << *ptr << endl; // Pointerın gösterdiği değeri yazdırır."

/*
	Pointerlar, bir değişkenin bellekteki adresini tutan değişkenlerdir.

	Pointer EXAMPLE:
*/

	int a = 10;
	int* ptr = &a;

	cout << " a nın adresi: " << &a << endl; // a'nın adresini yazdırır.
	cout << " a nın Adresi: " << ptr << endl; // ptr'nin tuttuğu adresi yazdırır.
	cout << " a nın Değeri: " << *ptr << endl; // ptr'nin gösterdiği değeri yazdırır."
	cout << " a nın Değeri: " << a << endl; // a'nın değerini yazdırır.	



}