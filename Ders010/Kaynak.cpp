#include <iostream>
using namespace std;
// CallByValue Example
void degistir(int deger) { 
	deger = deger * 2;
}
// CallByReference Example
void degistirRef(int& deger) {
	deger = deger * 2;
}
int main() {
	int sayi = 5;
	degistir(sayi);
	degistirRef(sayi);
	cout << "Sayi: " << sayi << endl;
	return 0;
}